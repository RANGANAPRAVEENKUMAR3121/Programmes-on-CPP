#include<iostream>
using namespace std;
class RECTANGLE
{
private:
    int length,breath,Area;
public:
    void get_data();
    void cal();
    void show_data();
};
void RECTANGLE :: get_data()
{
    cout<<"Enter length:";
    cin>>length;
    cout<<"Enter breath:";
    cin>>breath;
}
void RECTANGLE :: cal()
{
    Area=length*breath;
}
void RECTANGLE :: show_data()
{
    cout<<"AREA OF RECTANGLE = "<<Area<<endl;
}
main()
{
    RECTANGLE obj;
    obj.get_data();
    obj.cal();
    obj.show_data();
return 0;
}
