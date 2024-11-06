#include <iostream>
#include <string>
using namespace std;

int minimumcost(int input1, int input2[]) {
    int dp[input1];
    dp[0] = 0;
    for (int i = 1; i < input1; i++) {
        dp[i] = INT_MAX; 
        for (int j = i - 1; j >= 0 && j >= i - 3; j--) {
            int cost = abs(input2[i] - input2[j]);
            dp[i] = min(dp[i], dp[j] + cost);
        }
    }
    return dp[input1 - 1];
}

int main() {
    int N = 5;  
    int A[] = {3, 2, 6, 4, 5};  // Costs of flight tickets for each city
    int result = minimumcost(N, A);
    cout << result << endl;  // This will print the minimum possible cost of a flight ticket.
    return 0;
}
