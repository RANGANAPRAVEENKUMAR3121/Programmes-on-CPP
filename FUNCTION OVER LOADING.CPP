#include<iostream>
using namespace std;
class A
{
private:
    int a,b,c;
    float d;
public:
    void display(int w)                           //integer
    {
        a=w;
        cout<<"A value : "<<a<<endl;
    }
    void display(int x,int y)                    //integer and integer
    {
        b=x;
        c=y;
        cout<<"B value : "<<b<<endl;
        cout<<"C value : "<<c<<endl;
    }
    void display(float z,int x)                  //float and integer
    {
        d=z;
        b=x;
        cout<<"D value : "<<d<<endl;
        cout<<"B value : "<<b<<endl;
    }
};
int main()
{
    A obj;
    obj.display(5);
    obj.display(20,40);
    obj.display(3.14f,650);
return 0;
}
