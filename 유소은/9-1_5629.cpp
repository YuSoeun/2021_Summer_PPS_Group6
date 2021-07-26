#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> A[10];
    A[1] = {2, 4};
    A[2] = {1, 3, 5};
    A[3] = {2, 6};
    A[4] = {1, 5, 7};
    A[5] = {2, 4, 6, 8};
    A[6] = {3, 5, 9};
    A[7] = {4, 8, 0};
    A[8] = {5, 7, 9};
    A[9] = {6, 8};
    A[0] = {7};

    int dp[1000+1][10];
    memset(dp, 0, sizeof(dp));
    for (int i=0; i<10; i++) {
        dp[1][i] = 1;
    }
    for (int i=2; i<=1000; i++) {
        for (int j=0; j<10; j++) {
            for (int a : A[j]) {
                dp[i][j] += dp[i-1][a];
                dp[i][j] %= 1'234'567;
            }
        }
    }
    int T; cin >> T;

    while (T--) {
        int N; cin >> N;

        int ans = 0;
        for (int i=0; i<10; i++) {
            ans += dp[N][i];
            ans %= 1'234'567;
        } cout << ans << endl;
    }
}