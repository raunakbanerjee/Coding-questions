#include<iostream>
using namespace std;

int main(){
	int a[100];
	int n;cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int lst=1000000;
	int op=0;
	int pist=0;
	
	for(int i=0;i<n;i++){
		if(a[i]<lst){
			lst=a[i];
		}
		pist=a[i]-lst;
		if(pist>op){
			op=pist;
		}
	}
	cout<<op;
}
