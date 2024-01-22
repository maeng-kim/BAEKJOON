#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    int cnt =1, sum=0;
    
    for(int i=1; i<=B; i++) {
        for(int j=1; j<=i; j++) {
            //cout << i  << " ";
            if(cnt >= A && cnt <=B) {
                sum += i;
            }
            ++cnt;
        }
    }
    
    cout << sum << endl;
    return 0;
}
