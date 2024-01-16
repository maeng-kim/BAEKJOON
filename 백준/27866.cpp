#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "";
    int n;
    
    cin >> str;
    cin >> n;
    if (!(1<=n && n<=str.length())) {
        printf("invalid value");
    }
    else {
        cout << str[n-1];
    }
    return 0;
}
