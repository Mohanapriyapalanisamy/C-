#include<iostream>
using namespace std;
class arithmetic
{
    int a,b;
public:
    arithmetic()
    {
        a=1;
        b=1;
    }
    arithmetic(int x)
    {
        a=x;
        b=1;
    }
    arithmetic(arithmetic &x)//copy constructor
    {
        a=x.a;
        b=x.b;
    }
    void show()//Display the arithmetic results
    {
        cout<<"a = "<<a<<"\t"<<" b = "<<b<<endl;
        cout<<"a+b = "<<a+b<<endl;
        cout<<"a-b = "<<a-b<<endl;
        cout<<"a*b = "<<a*b<<endl;
        cout<<"a/b = "<<a/b<<endl;
        cout<<"a%b = "<<a%b<<endl;
        cout<<"\n";

    }
};
int main()
{
    arithmetic s1;
    s1.show();
    arithmetic s2(5);
    s2.show();
    arithmetic s3;
    s3=(s2);//copy constructor 1.s3 and s2 results is same because s2 content copied to s3
    s3.show();
    arithmetic s4=s1;//copy constructor 2.s4 and s1 is same
    s4.show();
    return 0;

}

