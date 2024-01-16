#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t=0;
    cin >> t;
    int result[t];
    for (int i =0; i<t;i++){
        int a =0;
        int b=0;
        cin >> a >> b;
        b = !(b%4)?4:b%4; //바로 pow쓰면 숫자가 너무 커짐. 일자리는 4번 주기로 반복됨. 따라서 4로 나누어 떨어지면 a를 4번 곱하면 되고 나누어 떨어지지 않으면 4로 mod한 만큼 a를 곱해주면 됨.
        int r = pow(a,b);
        result[i] = r%10;
    }
    
    for (int i =0; i<t; i++) {
        if (result[i]==0) {
            cout << 10 << endl;
        }
        else {
            cout << result[i] << endl;
        }
    }
    return 0;
}
