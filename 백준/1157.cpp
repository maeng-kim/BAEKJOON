#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s;
    int alpha[26]={0}, cnt =0;

    cin >> s;
    
    //A='65', Z='90' | a='97', z='122'
    for(int i =0; i<s.length(); i++) {
        s[i] = toupper(s[i]);
        alpha[s[i]-65]++;
        
        //이거 왜 안 되는거임..? 
        //if (s[i]<90) alpha[s[i]-65]++; //대문자일경우
        //else {alpha[s[i]-97]++;} //소문자일경우
    }
    int max =0, max_index=0;
    
    for (int i=0; i<26; i++) {
        if(max < alpha[i]) {
            max = alpha[i];
            max_index = i;
        }
    }
    
    for (int i=0; i<26; i++) {
        if(max==alpha[i]) {
            cnt++;
        }
    }
    
    if (cnt >= 2) cout << "?" << endl;
    else cout << (char)(max_index+65) << endl;
    
    return 0;
}

