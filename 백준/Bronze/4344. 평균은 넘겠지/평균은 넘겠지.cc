using namespace std;
#include <iostream>
#include <cmath>

int main()
{
    
    int c, n, num;
    int avg;
    double result;
    int arr[1000] = {0};
    
    cin >> c;
    for(int i=0; i<c; i++) {
        avg=0;
        num=0;
        cin >> n;

        for(int j=0; j<n; j++) {
            cin >> arr[j];
            avg += arr[j];
        }
        avg /= n;
        
        for (int k=0; k<n; k++) {
            if(arr[k] > avg) {
                num++;
            }
        }
        result = double(num) /n * 100;
        cout << fixed;
		cout.precision(3);
		cout << result << "%" << "\n";
    }
    

    return 0;
}