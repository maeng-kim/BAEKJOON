#include <iostream>
using namespace std;

int main()
{
    int n, stu, s, sn;
    cin >> n;
    int arr[n+1];
    for (int i=1; i<=n; i++) {
        cin >> arr[i];
    }
    
    cin >> stu;
    for (int i=0; i<stu; i++) {
        cin >> s >> sn; //성별, 본인 수
        
        if(s == 1) { //if boy
            for(int j =sn; j<=n; j+=sn) {
                arr[j] = 1 - arr[j];            }
        }
        else {//if girl
            arr[sn] = 1 - arr[sn];
            int left = sn-1;
            int right = sn+1;
            while (left > 0 && right <= n && arr[left] == arr[right]) {
                arr[left] = 1 - arr[left];
                arr[right] = 1 - arr[right];
                left--;
                right++;
            }
        }
    }
    
    for(int i=1; i<=n; i++) {
        cout << arr[i] << " ";
        if (i%20==0) {
            cout << "\n";
        }
    }

    return 0;
}