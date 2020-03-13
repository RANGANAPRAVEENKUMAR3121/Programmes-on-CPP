#include<iostream>
#include<string>
using namespace std;
class base
{
private:
    int a;
public:
    void data_base(int w)
    {
        a=w;
        cout<<"Base value : "<<a<<endl;
    }
};
class parent1 : virtual base
{
private:
    int b;
public:
    void parent1_data(int x)
    {
        b=x;
        cout<<"Parent1 value : "<<b<<endl;
        data_base(200);
    }
};
class parent2 : virtual base
{
private:
    int c;
public:
    void parent2_data(int y)
    {
        c=y;
        cout<<"Parent2 value : "<<c<<endl;
        data_base(100);
    }
};
class child :  public parent1,virtual public parent2
{
private:
    int d;
public:
    void child_data(int z)
    {
        d=z;
        cout<<"child value : "<<d<<endl;
        parent1_data(225);
        parent2_data(50);
    }
};
int main()
{
    child obj;
    obj.child_data(250);
return 0;
}
