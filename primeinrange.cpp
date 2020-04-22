#include<iostream>

using namespace std;

int main()
{
    int i=1,coun=0,x,y;
    cout<<"Enter a min number = ";
    cin>>x;
    cout<<"Enter a max number = ";
    cin>>y;
    while(x<=y)
    {
        coun=0;
        i=1;
        while (i<=x)
        {
            if(x%i==0)
                coun+=1;
            i+=1;
        }
    if(coun==2)
        cout<<"Number "<<x<<" is Prime."<<"\n";
    else
        cout<<"Number "<<x<<" is not Prime."<<"\n";
    x+=1;
    }
return 0;
}

