#include <iostream>
using namespace std;

int main() {

    int num, originalNum, reverse = 0, rem;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    // Reverse the number
    while(num > 0) {

        rem = num % 10;

        reverse = reverse * 10 + rem;

        num = num / 10;
    }

    // Check palindrome
    if(originalNum == reverse) {
        cout << "Palindrome Number";
    }
    else {
        cout << "Not a Palindrome Number";
    }

    return 0;
}