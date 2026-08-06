#include <iostream>
using namespace std;

int main() {
    int num;
    long fact = 1;  // use long long for bigger numbers
    
    cout << "Enter a number: ";
    cin >> num;
    
    if(num < 0)
        cout << "Factorial of negative number doesn't exist";
    else {
        for(int i = 1; i <= num; i++) {
            fact = fact * i;
        }
        cout << "Factorial of " << num << " = " << fact;
    }
    
    return 0;
}
