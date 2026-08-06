#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    
    cout << "Before: a = " << a << " b = " << b << endl;
    
    temp = a;  // step 1
    a = b;     // step 2  
    b = temp;  // step 3
    
    cout << "After: a = " << a << " b = " << b;
    
    return 0;
}