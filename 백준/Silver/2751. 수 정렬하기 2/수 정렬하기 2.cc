using namespace std;
#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int n;
    cin >> n;
    vector<int> list;
    for(int i=0; i<n; i++) {
        int tmp;
        cin >> tmp;
        list.push_back(tmp);
    }
    
    sort(list.begin(), list.end());
    for(int i=0; i<n; i++) {
        cout << list[i] << "\n";
    }

    return 0;
}