#include<iostream>
using namespace std;
class A
{
public:
    void display()
    {
        cout<<"Class A"<<endl;
    }
};
class B : public A
{
public:
    void display()
    {
        cout<<"Class B"<<endl;
    }
};
int main()
{
    B obj;
    obj.display();// calls derived class
    obj.A::display();//calls base class
return 0;
}
