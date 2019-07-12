#include<iostream>
using namespace std;
class stud
{
    int regno;
    char name[50];
    int marks[5];
    float total,average;
    char grade;
public:
    void getData();//used to get user details
    void display();//used to display student details
    void calculate();//used to calculate total,average,grade
};
void stud::getData()
{
    int i;
    cout<<"Enter Regno: ";
    cin>>regno;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter 5 subject marks: ";
    for(i=0;i<5;i++)
       cin>>marks[i];
}
void stud::calculate()
{
    total=0;
    int i;
    for(i=0;i<5;i++)
    {
        total+=marks[i];
    }
    //All 50<=marks>=100.If it is true find average and assign the grade based on average.
    if((marks[0]>49&&marks[0]<=100) && (marks[1]>49&&marks[1]<=100) && (marks[2]>49&&marks[2]<=100) && (marks[3]>49&&marks[3]<=100) && (marks[4]>49&&marks[4]<=100))
    {
        average=total/5;
        if(average>=90 && average<=100)
            grade='S';
        else if(average>=80 && average <90)
            grade='A';
        else if(average>=70 && average<80)
            grade='B';
        else if(average>=60 && average<70)
            grade='C';
        else
            grade='D';
    }
    else
    {
        average=0;//average=0.Because I don't want to calculate average for failed students
        grade='F';
    }

}
void stud::display()
{
    cout<<endl;
    cout<<"Regno: "<<regno<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"M1: "<<marks[0]<<endl;
    cout<<"M2: "<<marks[1]<<endl;
    cout<<"M3: "<<marks[2]<<endl;
    cout<<"M4: "<<marks[3]<<endl;
    cout<<"M5: "<<marks[4]<<endl;
    cout<<"Total: "<<total<<endl;
    cout<<"Average: "<<average<<endl;
    cout<<"Grade: "<<grade<<endl;

}
int main()
{
    int n,i;
    stud s[10];//array of object created for stud class
    cout<<"Enter number of students: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        s[i].getData();
        s[i].calculate();
    }
    cout<<"Student Details are:"<<endl;
    for(i=0;i<n;i++)
     s[i].display();
}
