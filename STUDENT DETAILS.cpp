#include<iostream>
#include<string>
using namespace std;
class STUDENT
{
private:
    int roll_no;
    char name[20];
    int marks[3];
public:
    void get_data()
    {
        cout<<"Enter ROLL_NO:";
        cin>>roll_no;
        cout<<"Enter NAME:";
        cin>>name;
        cout<<"Enter 3 subjects marks"<<endl;
        cin>>marks[1]>>marks[2]>>marks[3];
    }
    void show_data();
    int total();
    float average();
};
void STUDENT :: show_data()
{
    cout<<"STUDENT DETAILS\n";
    cout<<"================\n";
    cout<<"ROLL_NO:"<<roll_no<<endl;
    cout<<"NAME:"<<name<<endl;
    cout<<"MARKS"<<endl;
    cout<<"-----"<<endl;
    cout<<"Subject 1:"<<marks[1]<<endl;
    cout<<"Subject 2:"<<marks[2]<<endl;
    cout<<"Subject 3:"<<marks[3]<<endl;
    cout<<"TOTAL MARKS:"<<total()<<endl;
    cout<<"AVERAGE : "<<average();

}
int STUDENT :: total()
{
    int sum=0,i;
    for(i=1;i<=3;i++)
    {
        sum=sum+marks[i];
    }
    return sum;
}
float STUDENT :: average()
{
    int sum=0,i;
    float avg=0;
    for(i=1;i<=3;i++)
    {
        sum=sum+marks[i];
    }
    avg=sum/3;
    return avg;
}
int main()
{
    STUDENT obj;
    obj.get_data();
    obj.show_data();
return 0;
}
