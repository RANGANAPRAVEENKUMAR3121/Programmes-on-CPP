#include<iostream>
#include<string.h>
using namespace std;
class student
{
    int id,sub[5],m=3,j;
    string name;
public:
    void getdata()
    {
            cout<<"Enter id = ";
            cin>>id;
            cout<<"Enter name = ";
            cin>>name;
            for(j=1;j<=m;j++)
            {
                cout<<"Enter Marks = ";
                cin>>sub[j];
            }
    }
    void display();
    int avg();
    int total();
};
void student :: display()
{
        cout<<"ID = "<<id<<endl;
        cout<<"Name = "<<name<<endl;
        for(j=1;j<=m;j++)
        {
            cout<<"Marks = "<<sub[j]<<endl;
        }
        cout<<"Average = "<<avg()<<endl;
        cout<<"Total = "<<total()<<endl;
}
int student :: avg()
{
    int sum=0,average=0;
    for(j=1;j<=m;j++)
    {
        sum=sum+sub[j];
    }
    average=sum/3;
    return average;
}
int student :: total()
{
    int sum=0;
    for(j=1;j<=m;j++)
    {
        sum=sum+sub[j];
    }
    return sum;
}
int main()
{
    student obj[5];
    int i,n,m;
    cout<<"Enter your options"<<endl;
    cout<<"==================="<<endl;
    cout<<" Press '0' to enter student data "<<endl;
    cout<<" Press '1' to get enter students results data "<<endl;
    cout<<" Press '2' to EXIT"<<endl;
    do{
        cout<<endl;
        cout<<"Enter your choice:";
        cin>>m;

        switch(m)
            {
            case 0: cout<<"Enter no.of student information"<<endl;
                    cin>>n;
                    for(i=1;i<=n;i++)
                    {
                        cout<<endl;
                        cout<<"Enter student no = "<<i<<endl;
                        cout<<"--------------------"<<endl;
                        obj[i].getdata();
                    }break;
            case 1: cout<<"Entire students data"<<endl;
                    for(i=1;i<=n;i++)
                    {
                        cout<<endl;
                        cout<<"student = "<<i<<endl;
                        cout<<"--------------------"<<endl;
                        obj[i].display();
                    }
                    break;
            case 2: cout<<"EXIT"<<endl;
                    break;
            }
    }while(m!=2);


}
