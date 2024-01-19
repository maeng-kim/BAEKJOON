#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    
    string n;
    
    while (n!="0") {
        cin >> n;
        string rev = n;
        reverse(n.begin(), n.end()); //reverse함수는 입력받은 범위 내 원소들에 대해서 거꾸로 뒤집는다.
        if(n=="0") {
            break;
        }
        else if (n==rev) {
            cout << "yes\n";
        }
        else {
            cout << "no\n";
        }
    }
    return 0;
}
