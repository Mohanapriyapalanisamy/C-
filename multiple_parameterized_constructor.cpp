/*same constructor name used for multiple function is called multiple parameterized constructor
It is also called constructor overloading*/
#include<iostream>
using namespace std;
class sample
{
    int x,y;
public:
    sample()//Function 1
    {
        x=0;
        y=0;
    }
    sample(int r,int s)//Function 2
    {
        x=r;
        y=s;
    }
    void display()
    {
        cout<<"x = "<<x<<"\t"<<"Y = "<<y<<endl;
    }
};
int main()
{
    sample s1;//It calls function 1
    s1.display();
    sample s2=sample(10,20);//It calls Function 2
    s2.display();
}
