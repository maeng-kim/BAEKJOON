using namespace std;
#include <iostream>

int find(int a) {
    if(a==1) return 1;
    if(a==2) return 2;
    if(a==3) return 4;
    return a = find(a-1) + find(a-2) + find(a-3);
}

int main()
{
    int a;
    cin >> a;
    int num[a];
    for(int i=0; i<a; i++) {
        int x=0;
        cin >> x;
        num[i] = find(x);
    }
    for(int i=0; i<a; i++) {
        cout << num[i] << "\n";
    }

    return 0;
}