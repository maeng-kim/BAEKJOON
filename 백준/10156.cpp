#include <iostream>
using namespace std;

int main()
{
    int k, n, m;
    cin >> k >> n >> m;
    if (!(1<=k && k<=1000)) cout << "invalid number" << endl;
    if (!(1<=n && n<=1000)) cout << "invalid number" << endl;
    if (!(1<=m && m<=1000000)) cout << "invalid number" << endl;
    int d = k*n-m;
    if(d>0) cout << d << endl;
    else cout << "0" << endl;
    
    return 0;
}
