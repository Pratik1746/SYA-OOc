#include<iostream>
using namespace std;

class Calculator
{
    int a,b;
    public:
    void get()
    {
        cout<<"Enter two no";
        cin>>a>>b;
    }
    void add(){cout<<"\nAdd="<<a+b;}
    void sub(){cout<<"\nSub="<<a-b;}
    void mul(){cout<<"\nMul="<<a*b;}
    void div(){cout<<"\nDiv="<<a/b;}
    void mod(){cout<<"\nMod="<<a%b;}
};

int main()
{
    Calculator c;
    c.get();
    c.add();
    c.sub();
    c.mul();
    c.div();
    c.mod();
    return 0;
}