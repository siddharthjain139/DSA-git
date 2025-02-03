#include <iostream>
#include <cmath>
using namespace std;

// Helper function to count the number of digits in the number
int countDigits(int n) {
    if (n == 0) return 0;
    return 1 + countDigits(n / 10);
}

// Recursive function to check if the number is a palindrome
bool isPalindrome(int n, int temp) {
    if (n == 0)
        return true;

    int lastDigit = n % 10;
    int firstDigit = temp / pow(10, countDigits(n) - 1);

    if (lastDigit != firstDigit)
        return false;

    // Remove first and last digits
    temp = temp - firstDigit * pow(10, countDigits(n) - 1);
    n = n / 10;

    return isPalindrome(n, temp);
}

int main() {
    int N;
    cout << "Enter a natural number: ";
    cin >> N;

    if (isPalindrome(N, N))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
