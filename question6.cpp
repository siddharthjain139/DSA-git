#include <bits/stdc++.h>
using namespace std;


bool isPalindrome(int n, int rev, int original) {
    if (n == 0)
        return (rev == original);
    
    rev = rev * 10 + (n % 10);
    return isPalindrome(n / 10, rev, original);
}

int main() {
    int N;
    cout << "Enter a natural number: ";
    cin >> N;

    if (isPalindrome(N, 0, N))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
