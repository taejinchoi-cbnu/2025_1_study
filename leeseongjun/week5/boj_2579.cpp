#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int stair[301] = {0};
    int dp[301] = {0};

    for (int i = 1; i <= n; i++)
        cin >> stair[i];

    dp[1] = stair[1];
    dp[2] = stair[1] + stair[2];
    dp[3] = max(stair[1] + stair[3], stair[2] + stair[3]);

    for (int i = 4; i <= n; i++) {
        dp[i] = max(dp[i - 2], dp[i - 3] + stair[i - 1]) + stair[i];
    }

    cout << dp[n] << endl;

    return 0;
}
