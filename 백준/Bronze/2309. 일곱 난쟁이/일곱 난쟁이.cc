using namespace std;
#include <iostream>
#include <algorithm>

int main()
{
    int h[10];
    int sum=0;
    for (int i=0; i<9; i++) {
        cin >> h[i];
        sum += h[i];
    }
    
    sort(h, h+9);
    for(int i=0; i<8; i++) {
        for(int j=i+1; j<9; j++) {
            if(sum - (h[i]+h[j]) ==100) {
                for(int q=0; q<9; q++) {
                    if(q != i && q !=j) {
                        cout << h[q] << "\n";
                    }
                }
                return 0;
            }
        }
    }

    return 0;
}