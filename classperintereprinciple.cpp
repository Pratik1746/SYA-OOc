#include<iostream>
using namespace std;

class Interest
{
    float p,r,t,si;
    public:
    void get()
    {
        cout<<"Enter p r t";
        cin>>p>>r>>t;
    }
    void cal()
    {
        si=(p*r*t)/100;
        cout<<"SI="<<si;
    }
};

int main()
{
    Interest i;
    i.get();
    i.cal();
    return 0;
}