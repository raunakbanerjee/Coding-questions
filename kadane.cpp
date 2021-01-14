#include<iostream>
using namespace std;

//KADANE

int kadane(int a[],int n){


int csum=a[0];
int osum=a[0];

for(int i=1;i<n;i++){

if(csum>0){
	csum=csum+a[i];}
else
csum=a[i];
}
if(csum>osum)
osum=csum;
return osum;
}

int main(){
	int a[100];
	int n;cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<kadane(a,n);
}
