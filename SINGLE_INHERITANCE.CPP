#include<iostream>
using namespace std;
class base
{
public:
    void base_data()
    {
        cout<<"Base class "<<endl;
    }
};
class derived : public base
{
public:
    void derived_data()
    {
        cout<<"Derived class "<<endl;
    }
};
int main()
{
    derived obj;
    obj.derived_data();
    obj.base_data();
return 0;
}
