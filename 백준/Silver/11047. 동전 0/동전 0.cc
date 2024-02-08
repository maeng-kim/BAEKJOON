using namespace std;
#include <iostream>
#include <vector>

int main()
{
    int n, k;
    cin >> n >> k;
    
    int cnt=0;
    vector<int> A;
    
    for(int j=0; j<n; j++) {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }
    
    for (int i =n-1; i>=0; i--) {
        if(A[i] <= k) {
            int z=0;
            z= k/A[i];
            cnt += z;
            k = k-z*A[i];
        }
    }


    cout << cnt << "\n";
    return 0;
}