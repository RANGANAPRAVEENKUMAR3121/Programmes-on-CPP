#include<iostream>

using namespace std;

int main()
{
    int i,n,m,sum=0;
    cout<<"Enter a number = ";
    cin>>n;
    i=n;
    while (n>=1)
    {
        m=n%10;
        sum=sum+m*m*m;
        n=n/10;
    }
    if(sum==i)
        cout<<"Number "<<sum<<" is Armstrong.";
    else
        cout<<"Number "<<sum<<" is not Armstrong.";
return 0;
}
