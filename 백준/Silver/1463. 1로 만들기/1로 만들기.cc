using namespace std;
#include <iostream>
#include <algorithm>


int main() {
    int n;
    cin >> n;
    
    int dp[1000000];
    
    for(int i=2; i<=n; i++) { //1인 경우에는 0이니까 2부터
        //-1
        dp[i] = dp[i-1]+1;
        
        //2 나누기
        if(i%2==0) {
            dp[i] = min(dp[i],dp[i/2]+1);
        }
        
        //3 나누기
        if(i%3==0) {
            dp[i] = min(dp[i], dp[i/3]+1);
        }
    }
    
    cout << dp[n];

    return 0;
}