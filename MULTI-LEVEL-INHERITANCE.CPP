#include<iostream>
using namespace std;
class base1
{
public:
    void base1_data()
    {
        cout<<"1st Base class "<<endl;
    }
};
class base2
{
public:
    void base2_data()
    {
        cout<<"2nd Base class "<<endl;
    }
};
class derived : public base1,public base2        //it can inherit base and derived1 class also//
{
public:
    void derived_data()
    {
        cout<<"Derived class  "<<endl;
    }
};
int main()
{
    derived obj;
    obj.derived_data();
    obj.base1_data();
    obj.base2_data();
return 0;
}
