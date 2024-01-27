#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    
    vector<string> lis;
    vector<string> name;
    string l;
    
    for(int i=0; i<n; i++){
        cin >> l;
        lis.push_back(l);
    }
    sort(lis.begin(), lis.end());
    int cnt =0;
    for(int i=0; i<m; i++) {
        cin >> l;
        if (binary_search(lis.begin(), lis.end(), l)) { //이진탐색. 정렬된 상태에서만 사용
            name.push_back(l);
            cnt++;
        }
    }
    
    cout << cnt << "\n";
    sort(name.begin(), name.end());
    for(int i=0; i<name.size(); i++) {
        cout << name[i] << "\n";
    }
    return 0;
}