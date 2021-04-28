#include<iostream>
using namespace std;

void incdec(int n){
	if(n==0)
	return;

cout<<n;
incdec(n-1);
cout<<n;
//cout<<endl;
}


int main(){
	int n;cin>>n;
	incdec(n);
}
