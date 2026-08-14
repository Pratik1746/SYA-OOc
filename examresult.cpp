#include<iostream>
using namespace std;

class Result
{
private:
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
    
public:
    void accept()
    {
        cout << "Enter marks of 5 subjects: ";
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
    }
    
    void calculate()
    {
        total = m1 + m2 + m3 + m4 + m5;
        percentage = total / 5.0;
    }
    
    void display()
    {
        cout << "\nTotal: " << total << "/500";
        cout << "\nPercentage: " << percentage << "%";
        
        if(m1 >= 40 && m2 >= 40 && m3 >= 40 && m4 >= 40 && m5 >= 40)
            cout << "\nResult: PASS";
        else
            cout << "\nResult: FAIL";
    }
};

int main()
{
    Result r;
    r.accept();
    r.calculate();
    r.display();
    return 0;
}