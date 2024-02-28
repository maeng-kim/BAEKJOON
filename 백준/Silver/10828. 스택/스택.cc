using namespace std;
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#define MAX_SIZE 100

class Stack{
    vector<int> data;
    //int data[MAX_SIZE];
    int top; //요소의 개수를 나타낼 변수
    
    public:
        Stack() {top = -1; /*공백상태면 top은 -1*/}
        ~Stack() {}
        bool empty() { return top == -1; }
        //bool isFull() {return top == MAX_SIZE-1; }
        void push(int q) {
            /*if(isFull()) {
                printf("stack is full.");
            }
            else {data[++top] = q;}*/
            data.push_back(q);
            top++;
        }
        int pop() {
            if(empty()) {
                return -1;
            }
            int val = data.back();
            data.pop_back();
            top--;
            return val; 
        }
        int size() {
            return top+1;
        }
        int ftop() {
            if(empty()) {
                return -1;}
            return data[top];
        }
};

int main()
{
    Stack stack;
    int n;
    cin >> n;
  
    for(int i=0; i<n; i++) {
        string s;
        cin >> s;
        //getline(cin, s);
        
       /* istringstream iss(s); // 공백을 기준으로 문자열을 parsing하고, 변수 형식에 맞게 변환
        string o;
        iss >> o; */
        
        if(s=="push") {
            int a;
            cin >> a;
            stack.push(a);
        }
        else if(s == "pop") {
            cout << stack.pop() << "\n";
        }
        else if(s == "size") {
            cout << stack.size()<< "\n";
        }
        else if(s == "empty") {
            cout << stack.empty() << "\n";
        }
        else if(s == "top") {
            cout << stack.ftop() << "\n";
        }
    }

    return 0;
}