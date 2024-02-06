#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int k=0;

int main()
{
    string str="";
    cin >> str;
    k = str.length();
    vector<string> newOne(k);
    
    newOne[0] = str;
    for(int i=1; i<k; i++) { //벡터의 인덱스와 i값 맞춰야함
        str.erase(str.begin());
        newOne[i] = str;
        //str = str.erase(str.begin());
       //cout << newOne[i] << " ";
    }
    
    sort(newOne.begin(), newOne.end());
    
    for(int i=0; i<k; i++) {
        cout << newOne[i] << "\n";
    }

    return 0;
}