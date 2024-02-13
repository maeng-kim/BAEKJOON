#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    int t = 0;

    // 팀을 결성할 수 있는 최대 수 계산
    while (n >= 2 && m >= 1 && n + m >= k + 3) { //팀 결성 최소 수 3 + 인턴십 참가 k명
        n -= 2;
        m -= 1;
        t++;
    }

    cout << t << endl;

    return 0;
}