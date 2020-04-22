#include<iostream>

using namespace std;

int main()
{
    int i=1,coun=0,n;
    cout<<"Enter a number = ";
    cin>>n;
    while (i<=n)
    {
        if(n%i==0)
            coun+=1;
        i+=1;
    }
    if(coun==2)
        cout<<"Number "<<n<<" is Prime.";
    else
        cout<<"Number "<<n<<" is not Prime.";
return 0;
}
