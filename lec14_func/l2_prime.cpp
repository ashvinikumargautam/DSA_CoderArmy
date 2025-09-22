#include <iostream>
using namespace std;

bool prim(int n) {
    if(n < 2){
        return false;
    }
    for(int i = 2; i <= n / 2; i++) {
        if(n % i == 0){
            return false; // Not a prime
        }
    }
    return true; // Prime
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    if(prim(n)) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}