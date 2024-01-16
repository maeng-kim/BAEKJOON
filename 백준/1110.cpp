#include <iostream>
//#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x=0;
    cin >> x;
    int cnt, tmp;
    cnt=0;
    tmp=0;
    if(x<10) x*=10;
    tmp = x;
    while(1) {
        tmp = tmp%10 *10 + (tmp/10+tmp%10)%10;
        cnt++;
        if (tmp == x) {
            break;
        }
    }
    cout << cnt << endl;

    return 0;
}
