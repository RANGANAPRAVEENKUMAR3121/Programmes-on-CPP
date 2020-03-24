#include<iostream>
using namespace std;
/*EARLY BINDING CONCEPT */
//========================
class Base
{
public:
    void display()              //  EARLY BINDING
    {
        cout<<"CLASS A"<<endl;      //BASE CLASS CALLED
    }
};
class Derived : public Base
{
public:
    void display()
    {
        cout<<"CLASS B"<<endl;
    }
};
int main()
{
    Base *a;
    Derived b;
    a=&b;                   //IN EARLY BINDING IT DOESNT MENTION ADDRESS
    a->display();           //SO DIRECTLY CLASS A WILL BE CALLED
return 0;
}
/* LATE BINDING CONCEPT */
//=======================
class Base
{
public:
    virtual void display()              //  LATE BINDING
    {
        cout<<"CLASS A"<<endl;
    }
};
class Derived : public Base
{
public:
    void display()
    {
        cout<<"CLASS B"<<endl;      //  DERIVED CLASS CALLED
    }
};
int main()
{
    Base *a;
    Derived b;
    a=&b;               // IN LATE BINDING IT MENTION ADDRESS
    a->display();       //SO,  BY CONSIDERING ADDRESS CLASS B WILL BE CALLED
return 0;
}
