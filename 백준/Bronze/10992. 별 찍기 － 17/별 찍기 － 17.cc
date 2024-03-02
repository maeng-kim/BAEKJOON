using namespace std;
#include <iostream>
#include <cmath>

int main()
{
    int n;
    cin >> n;
    for(int i=1; i<n; i++) {
        for(int j=1; j<=n-i; j++) {
            cout << " "; //별 앞쪽 공백 출력
        }
        cout << "*";
        for(int a =0; a<2*i-3; a++) {
            cout << " "; //별 사이 공백, but 1인 경우는 빼줌
        }
        if(i>1) {cout << "*";}
        cout << "\n";
    }
    for(int i=1; i<=2*n-1; i++) {
        cout << "*";
    }

    return 0;
}