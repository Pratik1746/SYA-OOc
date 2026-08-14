#include<iostream>
using namespace std;

class Circle
{
    float r;
    public:
    void get()
    {
        cout<<"Enter radius";
        cin>>r;
    }
    void area()
    {
        cout<<"\nArea="<<3.14*r*r;
    }
    void circum()
    {
        cout<<"\nCircumference="<<2*3.14*r;
    }
};

int main()
{
    Circle c;
    c.get();
    c.area();
    c.circum();
    return 0;
}