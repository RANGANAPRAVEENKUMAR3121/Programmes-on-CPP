#include<iostream>
using namespace std;
class dad
{
public:
    int dad_money;
public:
    void get_dad_money()
    {
        cout<<"Enter pocket money given by dad : ";
        cin>>dad_money;
    }
    void show_dad_money()
    {
        cout<<"Pocket money given by dad = "<<dad_money<<endl;
    }
};
class mom
{
public:
    int mom_money;
public:
    void get_mom_money()
    {
        cout<<"Enter pocket money given by mom : ";
        cin>>mom_money;
    }
    void show_mom_money()
    {
        cout<<"pocket money given by mom = "<<mom_money<<endl;
    }
};
class child : public dad,public mom
{
public:
    int total_money;
public:
    void child_pocket_money()
    {
       total_money=dad_money+mom_money;
    }
    void show_pocket_money()
    {
         cout<<"Total pocket money for child  = "<<total_money;
    }
};
int main()
{
        child obj;
        obj.get_dad_money();
        obj.get_mom_money();
        obj.show_dad_money();
        obj.show_mom_money();
        obj.child_pocket_money();
        obj.show_pocket_money();
return 0;
}
