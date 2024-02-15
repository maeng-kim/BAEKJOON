using namespace std;
#include <iostream>
#include <algorithm>
#include <vector>

vector<string> name;
vector<int> num;

bool cmp(const int &a, const int &b) {
    if(num[a] == num[b]) {
        return a<b; //나이 같으면 가입한 순서대로
    }
    return num[a] < num[b]; //나이 다르면 나이 순으로
}

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int l;
        string s;
        cin >> l >> s;
        num.push_back(l);
        name.push_back(s);
    }
    
    //가입 순서를 알기 위한 인덱스 벡터
    vector<int> index(n);
    for(int i=0; i<n; i++) {
        index[i] = i;
    }
    
    
    sort(index.begin(), index.end(), cmp);
    
    for(int i=0; i<n; i++) {
        cout << num[index[i]] << " " << name[index[i]] << "\n";
    }

    return 0;
}


//ver2 -> 구조체 이용 (구글링.. 해봤음)
/*struct person {
    int age;
    string name;
    int order;
};

bool cmp(const person &a, const person &b) {
    if(a.age == b.age) return a.order<b.order;
    return a.age < b.age;
}
int main() {
    int n;
    cin >> n;
    vector<person> p(n);
    for(int i=0; i<n; i++) {
        cin >> p[i].age >> p[i].name;
        p[i].order = i;
    }
    
    sort(p.begin(), p.end(), cmp);
    
    for(int i=0; i<n; i++) {
        cout << p[i].age << " " << p[i].name << "\n";
    }
    return 0;
} */