#include <bits/stdc++.h>
using namespace std;

int maxProfit(int n, int prices[]) {
    if (n == 0) {
        return 0;
    }

    int max_profit = 0;
    for (int i = 0; i < n; i++) {
        int current_profit = prices[i]; 
        int remaining_length = n - (i + 1); 
        current_profit += maxProfit(remaining_length, prices); 
        max_profit = max(max_profit, current_profit); 
    }
    return max_profit;
}

int main() {
    int n = 8;
    int prices[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int result = maxProfit(n, prices);
    cout << result << endl; 
    return 0;
}