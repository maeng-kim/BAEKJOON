using namespace std;
#include <iostream>

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    int arr[n+1][n+1]={0};
    
    for(int i=1;i<=n; i++) {
        for(int j=1; j<=n; j++) {
            int a=0;
            cin >> a;
            arr[i][j] = arr[i][j-1]+arr[i-1][j]-arr[i-1][j-1]+a;
            //cout << arr[i][j] << " ";
        }
    }
    
    for(int k=0; k<m; k++) {
        int x1=0,y1=0,x2=0,y2=0;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << arr[x2][y2]-arr[x1-1][y2]-arr[x2][y1-1] + arr[x1-1][y1-1] << "\n";
    }

    return 0;
}