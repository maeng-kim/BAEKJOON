#include <iostream>
using namespace std;

int main() {
    int L, A, B, C, D;
    cin >> L >> A >> B >> C >> D;

     
    int maxK = (A + C - 1) / C;
    int maxM = (B + D - 1) / D;

    
    int d = max(maxK, maxM);

    int result = L - d;

    cout << result << endl;

    return 0;
}