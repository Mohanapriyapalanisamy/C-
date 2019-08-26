/*copy constructor mainly assigns content of one object to another
syntax: constructor_name obj1(obj2)*/
#include<iostream>
using namespace std;
class example
{
    int a,b;
public:
    example()
    {
        a=0;
        b=0;
    }
    example(example &x)
    {
        a=x.a;
        b=x.b;
    }
    example(int r,int s)
    {
        a=r;
        b=s;
    }
    void show()
    {
        cout<<"a = "<<a<<"\t"<<"b = "<<b<<endl;
    }
};
int main()
{
    example e0;
    example e1(10,20);
    example e2;
    e2=(e1);//copy constructor 1
    example e3=e1;//copy constructor 2
    e0.show();
    e1.show();
    e2.show();
    e3.show();
}

