using namespace std;
#include <iostream>

int main()
{
    long long dp[91];
    int a;
    cin >> a;
    
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    for(int i=3; i<=a; i++) {
        dp[i] = dp[i-1]+dp[i-2];
    }
    cout << dp[a];
    return 0;
}