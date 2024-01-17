#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n =0;
    cin >> n;
    double real[n];
    double newAvg = 0;
    for (int i=0; i<n; i++) {
        cin >> real[i];
    }
    sort(real, real+n); //sort() 첫번째 인자: 배열의 시작주소/ 두번째 인자: 마지막 주소+1
    double max = real[n-1];
    
    for (int i =0; i <n; i++) {
        real[i] = real[i]/max*100;
        newAvg += real[i];
    }
    newAvg /= n;
    
    cout << newAvg << endl;
    
    return 0;
}

