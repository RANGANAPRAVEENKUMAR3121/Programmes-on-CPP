#include<iostream>
using namespace std;
class ABC
{
private:
        int radious;
public:
        float area_a(int r)
        {
                radious=r;
                return (3.14f*r*r);
        }
};
class XYZ : public ABC
{
private:
        int length,breath;
public:
        int area_b(int x,int y)
        {
                length=x;
                breath=y;
          return (length*breath);
        }
};

int main()
{
         int l,m,n,area;
        float radious;
        cout<<"Enter length :";
        cin>>l;
        cout<<"Enter breath :";
        cin>>m;
        cout<<"Enter radious of a circle :";
        cin>>n;
        XYZ obj;
        radious=obj.area_a(n);
        cout<<"AREA OF A CIRCLE : "<<radious<<endl;
        area=obj.area_b(l,m);
        cout<<"AREA OF A RECTANGLE : "<<area<<endl;
return 0;

}
