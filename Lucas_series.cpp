#include<iostream>
using namespace std;
int main()
{
    int a=2,b=1,n,i,c;//The default value first two number in Lucas series is 2 and 1 respectively
    cout<<"Enter the number of terms in Lucas series : ";
    cin>>n;
    cout<<"Lucas series for "<<n<<" is:"<<endl;
    if(n==1)
        cout<<a<<endl;
    else if(n==2)
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
    else if(n>2)
    {
        cout<<a<<endl;
        cout<<b<<endl;
        for(i=0;i<n-2;i++)
        {
            c=a+b;
            cout<<c<<endl;
            a=b;
            b=c;

        }
    }
}
