#include<iostream>
using namespace std;


// i is pos in array 
int firstocc(int a[],int n,int i,int key){
	
	if(i==n)   //whole array is traversed,our element is not present
	return -1;
	
	
	if(a[i]==key){      //intuition like linear search
		return n-i;
	}
	return firstocc(a,n,i+1,key);     //i+1 since we 
}

int main(){
	int n;cin>>n;
		int a[100];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int i=0;
	cout<<firstocc(a,n,i,4);
}
