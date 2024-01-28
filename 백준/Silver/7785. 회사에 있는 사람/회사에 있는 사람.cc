#include <iostream>
#include <string>
#include <map>
using namespace std;
int n;
map<string, bool, greater<>> name;

int main()
{
    cin >> n;
    
    for(int i=0; i<n; i++) {
        string n, l;
        cin >> n >> l;
        
        if(l=="enter") {
            name.insert({n, true});
        }
        else if(l=="leave") {
            name.erase(n);
        }
    }
    
    for (auto i = name.begin(); i!=name.end(); i++) {
        cout << i->first << "\n";
    }
    
    return 0;
}