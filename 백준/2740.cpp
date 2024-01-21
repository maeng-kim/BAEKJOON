#include <iostream>
using namespace std;

int main()
{
    int N, M,M2, K, K2;
    cin >> N >> M;
    int A[N][M];
    for (int i=0; i<N; i++) {
        for (int j=0; j < M; j++) {
            cin >> A[i][j];
        }
    }
    
    cin >> M2 >> K2;
    int B[M2][K2];
    for (int i=0; i<M2; i++) {
        for (int j=0; j<K2; j++) {
            cin >> B[i][j];
        }
    }
    
    int n[N][K2];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K2; j++) {
            n[i][j] = 0;
        }
    }
    
    for (int i=0; i <N; i++) {
        for (int j=0; j<K2; j++) {
            for (int k=0; k<M; k++) {
                 n[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    
    for (int i=0; i<N; i++){
        for (int j=0; j<K2; j++) {
            cout << n[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
