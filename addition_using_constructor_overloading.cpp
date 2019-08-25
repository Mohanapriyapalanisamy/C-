/*Here 4 add function is used.
fun 1:default function
fun 2:function with 1 parameter
fun 3:function with 2 parameter
fun 4:function with 3 parameter*/
#include<iostream>
using namespace std;
class example
{
    int x,y,z;
public:
    example()//Fun 1
    {
        x=1;
        y=1;
        z=1;
    }
    example(int a)//Fun 2
    {
        x=a;
        y=1;
        z=1;
    }
    example(int a,int b)//Fun 3
    {
        x=a;
        y=b;
        z=1;
    }
    example(int a,int b,int c)//Fun 4
    {
        x=a;
        y=b;
        z=c;
    }
    void display()
    {
        cout<<"x = "<<x<<"\t"<<"y = "<<y<<"\t"<<"z = "<<z<<endl;
    }
};
int main()
{
    example e1;
    e1.display();
    example e2=example(10);
    e2.display();
    example e3=example(10,20);
    e3.display();
    example e4=example(10,20,30);
    e4.display();

}
