#include <iostream>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    int n,m;
    cin >> n >> m;
    int arr[n+1];
    arr[0]=0;
    for(int i=1; i<=n; i++) {
        int a=0;
        cin >> a;
        arr[i] = arr[i-1]+a;
    }
    
    for(int k=0; k<m; k++) {
        int i=0, j=0;
        cin >> i >> j;
        cout << arr[j]-arr[i-1] << "\n";
    }
    return 0;
}