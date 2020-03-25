#include<iostream>
using namespace std;
class abc
{
    int a;
public:
    abc()               //DEFAULT CONSTRUCTOR
    {
        a=0;
    }
    abc(int x)          //PARAMETERISED CONSTRUCTOR
    {
        a=x;
    }
    void display()
    {
        cout<<"Value of a = "<<a<<endl;
    }
    ~abc()                 //DESTRUCTOR
    {
        cout<<"Destructor "<<endl;
    }
};
int main()
{
    abc obj(5);
    abc obj1;
    obj.display();
    obj1=obj;           //COPY CONSTRUCTOR
    obj1.display();
return 0;
}
