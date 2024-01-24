#include <iostream>
#include <algorithm>
using namespace std;

int main()
{//A는 작은순서대로 sort, B는 큰순서대로Sort하고 곱하면 됨 (차례대로)
    int N=0;
    cin >> N;
    int A[N], B[N];
    for (int i=0; i< N; i++) {
        cin >> A[i];
    }
    for(int i=0; i< N; i++) {
        cin >> B[i];
    }
    
    sort(A, A+N);
    sort(B, B+N, greater<>());
    int sum =0;
    for(int i=0; i< N; i++) {
        sum += A[i]*B[i];
    }
    cout << sum;
    
    
    return 0;
}