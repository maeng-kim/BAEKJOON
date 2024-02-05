using namespace std;
#include <iostream>

int main()
{
    int n, cnt=0;
    cin >> n;
    
    for(int i=1; i<=n; i++) {
        if(i <= 99) {
            cnt++;
        }
        if(i>=100 && i<1000) {
            int h=0, t=0, c=0;
            int tmp = i;
            h = tmp/100;
            c = tmp%10;
            tmp /= 10;
            t = tmp%10;
            if(c-t == t-h) {
                cnt++;
            }
        }
    }
    
    cout << cnt << "\n";

    return 0;
}