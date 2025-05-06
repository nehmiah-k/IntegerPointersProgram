#include <iostream>
using namespace std;

int main() {
    // Step 1: Declare variables
    int a, b, c;

    // Step 2: Ask for user input
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;
    cout << "Enter third integer: ";
    cin >> c;

    // Step 3: Allocate memory dynamically using new
    int* pa = new int(a);
    int* pb = new int(b);
    int* pc = new int(c);

    // Step 4: Display values
    cout << "\nOriginal values:\n";
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    cout << "Values via pointers:\n";
    cout << "*pa = " << *pa << ", *pb = " << *pb << ", *pc = " << *pc << endl;

    // Step 5: Free memory using delete
    delete pa;
    delete pb;
    delete pc;

    // Optional: Set pointers to nullptr
    pa = nullptr;
    pb = nullptr;
    pc = nullptr;

    return 0;
}