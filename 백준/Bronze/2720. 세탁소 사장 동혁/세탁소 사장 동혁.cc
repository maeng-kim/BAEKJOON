using namespace std;
#include <iostream>
#include <vector>

int main()
{
    int T;
    cin >> T;
    
    int coin[4] = {25, 10, 5, 1};
    vector<int> m(T);
    
    for(int i =0; i<T; i++) {
        int n;
        cin >> n;
        m[i] = n;
    }
    
    /*for(int i=0; i<T; i++) {
    for(int j=0; j<4; j++) {
        if(m[i] >= coin[j]) {
            cout << m[i]/coin[j] << " ";
            m[i] -= (m[i]/coin[j]) * coin[j];
        }
    }
} 
젤 첨에 짠 코드 -> 0이 출력 되지 않음 if문 조건 자체에 안 맞기 때문
따라서 걍 for문 돌리고 몫이 출력되게만 하면 됨 -> if문 제거 */

    for(int i=0; i<T; i++) {
        for(int j=0; j<4; j++) {
            int count = m[i] /coin[j];
            m[i] -= count * coin[j];
            cout << count << " ";
        }
        cout << "\n";
    }

    return 0;
}