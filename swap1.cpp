#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    
    cout << "Enter first number: ";
    cin >> a;
    
    cout << "Enter second number: ";
    cin >> b;
    
    cout << "\nBefore swapping: a = " << a << ", b = " << b << endl;
    
    // swap using third variable
    temp = a;
    a = b;
    b = temp;
    
    cout << "After swapping: a = " << a << ", b = " << b;
    
    return 0;
}