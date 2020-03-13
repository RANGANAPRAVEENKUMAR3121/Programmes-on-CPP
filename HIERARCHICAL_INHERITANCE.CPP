#include<iostream>
#include<string>
using namespace std;
class common
{
private:
    string name;
    string gender;
    int age;
public:
    void get_info()
    {
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter gender : ";
        cin>>gender;
        cout<<"Enter age : ";
        cin>>age;
    }
    void show_data()
    {
        cout<<"FILE "<<endl;
        cout<<"===="<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Gender : "<<gender<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
class teacher : public common
{
private:
    int salary;
public:
    void get_salary()
    {
        cout<<"Enter salary : ";
        cin>>salary;
    }
    void show_salary()
    {
        cout<<"Salary : "<<salary;
    }
};
class student : public common
{
private:
    float grade;
public:
    void get_grade()
    {
        cout<<"Enter grade : ";
        cin>>grade;
    }
    void show_grade()
    {
        cout<<"Grade : "<<grade;
    }
};
int main()
{
     student obj;
     teacher obj1;
    int m;
    cout<<"Select File "<<endl;
    cout<<"============"<<endl;
    cout<<"Enter 1 to insert student details."<<endl;
    cout<<"Enter 2 to insert teacher details."<<endl;
    cout<<"Enter 3 to exit."<<endl;
    do
    {
        cout<<endl<<"Enter your choice : ";
        cin>>m;
        switch(m)
        {
        case 1:

            obj.get_info();
            obj.get_grade();
            obj.show_data();
            obj.show_grade();
            break;
        case 2:

            obj1.get_info();
            obj1.get_salary();
            obj1.show_data();
            obj1.show_salary();
            break;

        case 3:
            cout<<"EXIT"<<endl;
            break;
        }
    }while(m!=3);
return 0;
}
