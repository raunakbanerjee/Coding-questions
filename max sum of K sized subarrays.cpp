// max sum out of k sized subarray

#include<iostream>
using namespace std;

int Kar(int a[],int n,int k){
	
int ws=0;
int mxs;	
for(int i=0;i<k;i++)
ws=ws+a[i];

mxs=ws;

for(int i=k;i<n;i++){
ws=ws+a[k]-a[i-k];
mxs=max(ws,mxs);
}

return mxs;
}

int main(){
	int n,k;cin>>n>>k;
	int a[100];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<Kar(a,n,k);
}
