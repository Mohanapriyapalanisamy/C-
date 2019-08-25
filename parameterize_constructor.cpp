#include<iostream>
using namespace std;
class sample
{
    int x,y;
public:
    sample(int r,int s)
    {
        x=r;
        y=s;
    }
    void display();
};
void sample::display()
{
    cout<<"x = "<<x<<"\t"<<"Y = "<<y<<endl;
}
int main()
{
    sample s1(1,2);//implicit calling
    s1.display();
    sample s2=sample(11,22);//explicit calling
    s2.display();
    return 0;

}

