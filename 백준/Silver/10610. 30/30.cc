using namespace std;
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

//끝이 0이고 앞에 숫자들이 3의 배수면 됨.
int main() {
    string num;
    cin >> num;
    
    vector<int> digits;
    int sum = 0;

    for (int i = 0; i < num.size(); ++i) {
        int digit = num[i] - '0';
        digits.push_back(digit);
        sum += digit;
    }
    sort(digits.begin(), digits.end(), greater<int>());
    if (sum % 3 == 0 && digits[num.size()-1]==0) {
        for (int i = 0; i < digits.size(); ++i) {
            cout << digits[i];
        }
        //cout << "\n";
    } else {
        cout << -1;
    }

    return 0;
}
