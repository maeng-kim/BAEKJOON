using namespace std;
#include <iostream>

int main() {
    int sum =0;
    for(int i=0; i<5; i++) {
        int a;
        cin >> a;
        sum += a; 
    }
    
    cout << sum;
    return 0;
}