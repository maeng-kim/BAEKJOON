#include <iostream>
#include <algorithm>
using namespace std;



int main()
{
    int N, sum=0;
    cin >> N;
    
    int p[N];
    int l[N];
    for (int i=0; i<N; i++) {
        p[i] = 0;
        l[i] =0;
    }
    
    for(int i=0; i< N; i++) {
        cin >> p[i];
    }
    
    sort(p, p+N);
    for (int i=0; i<N; i++) {
        for (int j=0; j<=i; j++) {
            l[i] += p[j];
        }
        sum += l[i];
    }
    cout << sum;
    return 0;
}