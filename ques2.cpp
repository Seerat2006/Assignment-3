#include <iostream>
#include <string>
using namespace std;

#define SIZE 100
char st[SIZE];
int top = -1;

void push(char c) { 
    st[++top] = c; 
}
char pop() { 
    return st[top--];
 }

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) push(s[i]);
    for (int i = 0; i < s.length(); i++) cout<<pop();
    return 0;
}