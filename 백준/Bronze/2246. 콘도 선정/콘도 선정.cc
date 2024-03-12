using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n, cnt, flag; //can은 후보지가 가능한지 여부를 나타냄
    cnt=0;
    cin>>n;
    vector<pair<int,int>> v(n);
    
    for(int i=0; i<n; i++) {
        cin >> v[i].first >> v[i].second; //값 입력받기
    }
    
    for(int i=0; i<n; i++) {
        flag = 1;
        for(int j=0; j<n; j++) {
            if(i!=j) {
                if(v[i].first >= v[j].first && v[i].second >= v[j].second) { //더 가까운데 가격도 더 싸
                    flag =0;
                    break;
                }
                if(v[i].second >= v[j].second && v[i].first >= v[j].first) { //가격도 더 싼데 더 가까워
                    flag =0;
                    break;
                }
            }
        }
        if(flag) cnt++;
    }
    
    cout << cnt;

    return 0;
}