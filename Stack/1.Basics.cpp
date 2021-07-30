#include<iostream>
#include<stack>
using namespace std;
int main(){

stack<int> s;

s.push(10);
s.push(20);
s.push(30);

cout<<s.top()<<endl;
s.pop();
cout<<s.top();

cout<<s.size();
cout<<s.empty(); //if 0 it means not empty
}
