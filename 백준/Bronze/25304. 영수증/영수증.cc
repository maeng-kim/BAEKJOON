using namespace std;
#include <iostream>

int main()
{
    int re=0;
    cin >> re;
    
    int n, sum=0;
    cin >> n;
    for(int i=0; i<n; i++) {
        int w=0, k=0;
        cin >> w >> k;
        sum = sum+w*k;
    }
    if(re==sum) {
        cout << "Yes";
    }
    if(re != sum) {
        cout << "No";
    }

    return 0;
}