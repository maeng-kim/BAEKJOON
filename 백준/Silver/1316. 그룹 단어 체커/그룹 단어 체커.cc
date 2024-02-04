using namespace std;
#include <bits/stdc++.h>

int main()
{
    int c;
    cin >> c;
    
    int cnt = 0;
    
    for (int i = 0; i < c; i++) {
        string word;
        cin >> word;
        
        int a[26] = {0}; // 초기화 
        
        bool groupWord = true;
        for (size_t j = 0; j < word.length(); j++) { //부호가 다른 정수 교 경고 때문에
            char c = word[j];
            a[c - 'a']++;
            
            if (a[c - 'a'] >= 2) {
                if (j == 0 || word[j-1] == c) {
                    continue;
                }
                else {
                    groupWord = false;
                    break;
                }
            }
        }
        if (groupWord) {
            cnt++;
        }
    }
    
    cout << cnt << "\n";

    return 0;
}