#include<iostream>
using namespace std;
class ABC
{
private:
        int r;
public:
        ABC()
        {
                cout<<"Enter radious : ";
                cin>>r;
        }
        float area_a()
        {
                return (3.14f*r*r);
        }
};
class XYZ : public ABC
{
private:
        int length,breath;
public:
        XYZ(int x,int y):ABC()
        {
                length=x;
                breath=y;
        }
        int area_b()
        {
             return (length*breath);
        }
};
int main()
{
        int l,m,area;
        float radious;
        cout<<"Enter length :";
        cin>>l;
        cout<<"Enter breath :";
        cin>>m;
        XYZ obj(l,m);
        radious=obj.area_a();
        cout<<"AREA OF A CIRCLE : "<<radious<<endl;
        area=obj.area_b();
        cout<<"AREA OF A RECTANGLE : "<<area<<endl;
return 0;

}
