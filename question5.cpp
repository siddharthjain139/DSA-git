// Write a recursive function to calculate the sum of the digits of a given positive integer.

// Input:
// Enter a positive integer: 12345

// Output:
// The sum of the digits of 12345 is 15.

#include <bits/stdc++.h>

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + sumOfDigits(n / 10);
    }
}

int main() {
    int num;

    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1; // Indicate an error
    }

    int sum = sumOfDigits(num);

    std::cout << "The sum of the digits of " << num << " is " << sum << "." << std::endl;

    return 0;
}