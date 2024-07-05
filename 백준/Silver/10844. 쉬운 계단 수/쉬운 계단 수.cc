using namespace std;
#include <iostream>
#define MOD 1000000000;

long long dp[101][10];

int main()
{
    int N;
    cin >> N;
    for(int i = 1; i<= 9; i++) dp[1][i] = 1; // 1일 때 초기
    for(int i = 2; i <= N; i++) {
        for(int j = 0; j <= 9; j++) {
            if(j==0) {
                dp[i][j] = dp[i-1][1]%MOD;
            }
            else if(j==9) {
                dp[i][j] = dp[i-1][8]%MOD;
            }
            else {
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1])%MOD;
            }
        }
    }
    long long answer = 0;
    for(int i = 0; i <= 9; i++) answer += dp[N][i];

    cout << answer % MOD;

    return 0;
}