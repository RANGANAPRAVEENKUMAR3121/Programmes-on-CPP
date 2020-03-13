#include<iostream>
#include<string>
using namespace std;
//using public access specifier//
class base                              //the base class comes under public
{
public:
    void base_data()
    {
        cout<<"Base class "<<endl;
    }
};
class derived : public base             // under public
{
public:
    void derived_data()
    {
        cout<<"Derived class "<<endl;
        base_data();
    }
};
int main()
{
    derived obj;
    obj.derived_data();
    obj.base_data();
return 0;
}
//using private access specifier//
class base
{
public:                                  //base class comes under private to derived class
    void base_data()
    {
        cout<<"Base class "<<endl;
    }
};
class derived : private base            //under private
{
public:
    void derived_data()
    {
        cout<<"Derived class "<<endl;
        base_data();
    }
};
int main()
{
    derived obj;
    obj.derived_data();
return 0;
}
//using protected access specifier//
class base
{
public:                                  //public turns into protected
    void base_data()
    {
        cout<<"Base class under public "<<endl;
    }
protected:                               //protected remains same
    void data()
    {
        cout<<"Base class under protected "<<endl;
    }
};
class derived : protected base          //under protected
{
public:
    void derived_data()
    {
        cout<<"Derived class "<<endl;
        base_data();
        data();
    }
};
int main()
{
    derived obj;
    obj.derived_data();
return 0;
}
