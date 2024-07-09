#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int dp[2][100001]; //max
int arr[2][100001]; //test data

int main()
{
    int a;
    int n;
    cin >> a;
    for(int t=0; t<a; t++) {
        cin >> n;
        for(int i=0; i<2; i++) {
            for(int j=1; j<=n; j++) {
                cin >> arr[i][j];
            }
        }
        dp[0][0] = 0;
        dp[1][0] = 0;
        dp[0][1] = arr[0][1];
        dp[1][1] = arr[1][1];
        
        for(int j=2; j<=n; j++) {
            dp[0][j] = max(dp[1][j-2], dp[1][j-1]) + arr[0][j];
            dp[1][j] = max(dp[0][j-2], dp[0][j-1]) + arr[1][j];
        }
        cout << max(dp[0][n], dp[1][n]) << "\n";
    }
    return 0;
}