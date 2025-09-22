#include <iostream>
using namespace std;

// Function to add two numbers
int addNumbers(int a, int b) { //func declaration
    return a + b; // func define
}
int mulNumbers(int a, int b) { //func declaration
    return a * b; // func define
}
void func(){
    cout<<"hello coder army";
}

int main() {
    int num1, num2;

    // Taking input from the user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Calling the function and displaying the result
    int sum = addNumbers(num1, num2); //func call
    cout << "The sum is: " << sum << endl;
    int mul = mulNumbers(num1, num2); //func call
    cout << "The mul is: " << mul << endl;
    func();
    return 0;
}
 