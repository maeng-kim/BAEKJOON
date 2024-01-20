#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string n;
    cin >> n;
    const int size = n.size(); //변수로 입력하면 가변길이가 되어서 이상한 문자가 붙어서 출력됨
    int nlist[n.size()];
    
    
    for (int i =0; i< n.size(); i++) {
        nlist[i] = n[i] - '0'; //string to int:스트링 형변환은 명시적 형변환이나 (int) str 같은 형식 사용 불가/ 또는 -'0' (문자에서 정수 변환)
    }
    
    sort(nlist, nlist+size, greater<>()); //greater<>() 사용하면 내림차순 정렬
    
    for(int i =0; i<size; i++) {
        cout << nlist[i];
    }
    cout << "\n";
    return 0;
}
