using namespace std;
#include <iostream>
#include <algorithm>
#include <vector>

bool cmp(const string &a, const string &b) {
    if(a.length() == b.length()) //길이가 같으면 사전 순
        return a< b;
    return a.length() < b.length(); //아니라면 길이가 짧은 것부터
}

int main() {
    int n;
    cin >> n;
    vector<string> list;
    
    for(int i = 0; i < n; i++) {
        string l;
        cin >> l;
        list.push_back(l);
    }
    
    sort(list.begin(), list.end(), cmp);
    list.erase(unique(list.begin(), list.end()), list.end());//중복제거를 위함
    //벡터 중복 제거: 유니크(연속된 중복 원소를 벡터 젤 뒷부분으로 보내버림 -> 정렬 필수
    //erase : 해당 부분을 삭제함
    
    for(int i = 0; i < list.size(); i++) {
        cout << list[i] << "\n";
    }

    return 0;
}