#include<iostream>
using namespace std;

class Greatest
{
    int a,b;
    public:
    void get()
    {
        cout<<"Enter two no";
        cin>>a>>b;
    }
    void find()
    {
        if(a>b)
        cout<<"Greatest="<<a;
        else
        cout<<"Greatest="<<b;
    }
};

int main()
{
    Greatest g;
    g.get();
    g.find();
    return 0;
}