#include<iostream>
using namespace std;
class DATABASE
{
public:
    virtual void getname()=0;
};
class MANAGER
{
public:
    void getname()
    {
        cout<<"Manager class "<<endl;
    }
};
class ACCOUNTANT
{
public:
    void getname()
    {
        cout<<"Accountant class "<<endl;
    }
};
class CUSTOMER
{
public:
    void getname()\
    {
        cout<<"Customer class"<<endl;
    }
};
int main()
{
    MANAGER m;
    ACCOUNTANT a;
    CUSTOMER c;
    m.getname();
    a.getname();
    c.getname();
return 0;
}

