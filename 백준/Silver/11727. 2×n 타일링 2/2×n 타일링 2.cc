using namespace std;
#include <iostream>
int dp[1001];

int tile(int x){
    if(x==1) return dp[x]=1;
    if(x==2) return dp[x]=3;
    if(dp[x]!=0) return dp[x];
    return dp[x]=(tile(x-1)+(tile(x-2)*2))%10007;
}

int main()
{
    int a;
    cin >> a;
    int result = tile(a);
    cout << result;

    return 0;
}