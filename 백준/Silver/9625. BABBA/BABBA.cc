#include <iostream>
using namespace std;

int main()
{
    int n =0;
    long long A[45];
    long long B[45];
    
    A[0]=0; //A, B개수를 1번 눌렀을 때부터 살펴보면 (n-1)+ (n-2)=n번째 눌렀을 때 A, B의 개수가 됨을 알 수 있음
    A[1]=1; //A: 0,1 | B: 0,1번째만 지정해두고 2부터 for문으로 찾으면 됨
    B[0]=1;
    B[1]=1;
    
    cin >> n;
    for (int i=2; i<n; i++) {
        A[i]=A[i-1]+A[i-2];
        B[i] = B[i-1]+B[i-2];
    }
    
    cout << A[n-1] << " " << B[n-1];
    return 0;
}