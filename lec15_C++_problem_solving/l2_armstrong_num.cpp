#include <iostream>
#include <cmath>
using namespace std;

int countDigit(int num) {
    int count  = 0;
    while (num > 0) {
        count++;
        num = num / 10;
    }
    return count;
}

int armstrong(int num, int digit) {
    int ans = 0;
    int temp = num;  // Preserve original number

    while (temp > 0) {
        int rem = temp % 10;
        temp = temp / 10;
        int sqr = pow(rem, digit);
        ans = ans +sqr; 
    }
    cout<<ans<<endl;
    if (num == ans) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    cin >> num;

    int digit = countDigit(num);

    if (armstrong(num, digit)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }
    return 0;
}
// this code is not too precise
// 153
// 152
// 153 is not an Armstrong number.
//pow 125.000001

//but right for all other numbers

