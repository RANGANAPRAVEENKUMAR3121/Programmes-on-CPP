#include<iostream>

using namespace std;

int main()
{
    int x,y;
    cout<<"Enter min number = ";
    cin>>x;
    cout<<"Enter max number = ";
    cin>>y;
    while(x<=y)
    {
        if (x%2==0)
            cout<<x;
            cout<<"\t";
        x+=1;
    }
return 0;
}

int main()
{
    int x,y;
    cout<<"Enter min number = ";
    cin>>x;
    cout<<"Enter max number = ";
    cin>>y;
    while(x<=y)
    {
        if (x%2!=0)
            cout<<x;
            cout<<"\t";
        x+=1;
    }
return 0;
}
