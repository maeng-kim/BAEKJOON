using namespace std;
#include <iostream>
#define MOD 10007;
int dp[1000][10];

int main()
{
    int a;
    cin >> a;
    for(int i=0; i<10; i++) {
        dp[1][i] = 1; //초기화
    }
    
    for(int i=2; i<=a; i++) { //행
        for(int j=0; j<10; j++) { //열
            for(int k=j; k<10; k++) { //현재 칸은 이전 행의 모든 열을 더한 값
                dp[i][j] += dp[i-1][k];
                dp[i][j]=dp[i][j]%MOD;
            }
        }
    }
    
    int sum =0;
    for (int i=0; i<10; i++) {
        sum += dp[a][i];
    }
    sum = sum % MOD;
    cout << sum << "\n";
    return 0;
}