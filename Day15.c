Q29: Factorial of a Number.
CODE:
#include <iostream>
using namespace std;

int main() {
    int num;
    long long factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial of a negative number doesn't exist.";
    } else {
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << num << " = " << factorial;
    }

    return 0;
}

Q30: Reverse a Given Number.
CODE:
#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0, remainder;

    cout << "Enter an integer: ";
    cin >> num;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    cout << "Reversed number = " << reversedNum;

    return 0;
}
