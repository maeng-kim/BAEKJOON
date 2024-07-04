#include <iostream>
using namespace std;

int num[1001];

int dp(int b){
    if(b==1) return num[b]=1;
    if(b==2) return num[b]=2;
    if(num[b]!=0) return num[b];
    return num[b]=(dp(b-1)+dp(b-2)) %10007;
}

int main()
{
    int a;
    cin >> a;
    int sol = dp(a);
    cout << sol;

    return 0;
}