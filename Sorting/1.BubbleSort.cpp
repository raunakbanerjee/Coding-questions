#include<iostream>
using namespace std;

//Main logic is if a[i+1]<a[i] swap them.

void bubble(int a[],int n){
	
	for(int i=0;i<n-1;i++){
		
		for(int j=0;j<n-i-1;j++){  //n-i-1 since for every ith iteration we have the max element that moves over to the right and we no longer need to compare it
			if(a[j]>a[j+1])
			swap(a[j],a[j+1]);
		}
	}
	
}


void print(int a[],int n){
	
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}

int main(){
	int n;cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
	cin>>a[i];
	bubble(a,n);
	print(a,n);
}
