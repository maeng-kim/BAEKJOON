using namespace std;
#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
#include <sstream>

int main()
{
    int T;
    cin >> T;
    cin.ignore(); //입력버퍼비워
    
    for(int i=0; i<T; i++) {
        string s;
        getline(cin, s); //한 줄 입력 받아
        
        istringstream ss (s);
        string sub;
        vector<string> v;
        
        while(getline(ss, sub, ' ')) {
            reverse(sub.begin(), sub.end());
            v.push_back(sub);
        }
        
        for(int i=0; i<v.size();i++) {
            cout << v[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}