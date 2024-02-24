using namespace std;
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

int A, p;
vector<int> list;

int cn(int b) {
    int a=b%10;
    A /= 10;
    return a;
}

int dn(int n) {
    int sum =0;
    int tmp = n;
    while(tmp > 0) {
        sum += pow(cn(tmp), p);
        tmp /= 10;
    }
    
    return sum;
 }
 
int main()
{
    cin >> A >> p;
    
    int current = A;
    
    while(true) {
        if(find(list.begin(), list.end(), current)!= list.end()) {
            //index = find(list.begin(),list.end(), current) - list.begin();
            break;
        }
        list.push_back(current);
        current = dn(current);
    }
    int index=0;
    index = find(list.begin(), list.end(), current) - list.begin();
    
    int cnt=0;
    for(int i=0; i< index; ++i) {
        cnt++;
    }
    cout << cnt;
    

    return 0;
}