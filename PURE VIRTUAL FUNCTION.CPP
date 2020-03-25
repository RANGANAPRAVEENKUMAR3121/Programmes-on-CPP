#include<iostream>
using namespace std;
class Base
{
public:
     virtual void display()=0;      //PURE VIRTUAL FUNCTION
};
class Derived : public Base
{
public:
    void display()
    {
        cout<<"DERIVED CLASS"<<endl;
    }
};
int main()
{
    Derived obj;
    obj.display();
return 0;
}

