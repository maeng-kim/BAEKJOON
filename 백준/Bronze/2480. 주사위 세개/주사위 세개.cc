#include <iostream>
using namespace std;

int main() {
    int num[3];

    for (int i = 0; i < 3; ++i) {
        cin >> num[i];
    }

    int prize = 0;

    if (num[0] == num[1] && num[1] == num[2]) {
        prize = 10000 + num[0] * 1000;
    } else if (num[0] == num[1] || num[0] == num[2]) {
        prize = 1000 + num[0] * 100;
    } else if (num[1] == num[2]) {
        prize = 1000 + num[1] * 100;
    } else {
        int max_num = num[0];
        for (int i = 1; i < 3; ++i) {
            if (num[i] > max_num) {
                max_num = num[i];
            }
        }
        prize = max_num * 100;
    }

    cout << prize << endl;

    return 0;
}
