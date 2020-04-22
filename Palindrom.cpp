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
        sum=sum*10+m;
        n=n/10;
    }
    if(sum==i)
        cout<<"The given number "<<sum<<" is Palindrom.";
    else
        cout<<"The given number "<<sum<<" is not Palindrom.";
}
