#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int rsbm;
int count=0;
while(n!=0){
rsbm=n & -n;
n=n-rsbm;
count++;}
cout<<count;
}
