using namespace std;
#include <iostream>
#include <queue>

int main()
{
    queue<int> card;
    
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        card.push(i+1);
    }
    
    while(card.size()!=1) {
        card.pop();
        card.push(card.front());
        card.pop();
    }
    
    cout << card.back();

    return 0;
}