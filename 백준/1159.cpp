#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a=0;
    cin >> a;
    string name[a];
    string arr[26] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j",
                           "k", "l", "m", "n", "o", "p", "q", "r", "s", "t",
                           "u", "v", "w", "x", "y", "z"};
    int cnt[26];
    for (int i=0; i<26;i++){
        cnt[i]=0;
    }
    for (int i =0; i<a; i++) {
        cin >> name[i];
    }
    string f[a];
    for(int i =0; i<a;i++){
        f[i]=name[i].substr(0,1);
    }
    for(int i =0; i<a;i++){
        for (int j =0; j<26; j++){
            if(f[i]==arr[j]) {
                cnt[j]++;
            }
        }
    }
    int l =0;
    for(int k =0; k<26;k++) {
        if(cnt[k]>5){
            cout << arr[k];
            l++;
        }
    }
    if (l==0) {
        cout << "PREDAJA";
    }
    
    return 0;
}
