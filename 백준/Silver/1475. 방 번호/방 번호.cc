#include <iostream>
#include <string>
using namespace std;
string n;
int num[10];

int main()
{
    cin >> n;
    
    for(int i=0; i<n.length(); i++) {
        if(n[i]=='9') num[6]++;
        else num[n[i]-'0']++;
    }
    
    int sn = (num[6]+1)/2;
    num[6]=num[9]=sn;
    
    int m=0;
    for(int i=0; i< 10; i++) {
        if(num[m]<num[i]) m=i;
    }
    cout << num[m] << "\n";
    return 0;
}