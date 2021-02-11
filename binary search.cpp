#include<iostream>
using namespace std;

long long int binarySearch(long long int a[],long long int n,long long int x){

long long int start=0;
long long int end=n-1;
long long int res=-11;
	while(start<=end){
		
	long long int mid=start+(end-start)/2;
		if(x==a[mid]){
		res=mid;
		//return mid;
		end=mid-1;
	}
		else if(x<a[mid]){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	return res;
}
long long int binarySearch2(long long int a[],long long int n,long long int x){

long long int start=0;
long long int end=n-1;
long long int res=-11;
	while(start<=end){
		
	long long int mid=start+(end-start)/2;
		if(x==a[mid]){
		res=mid;
		start=mid+1;
	}
		else if(x<a[mid]){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	return res;
}

int main(){
   long long  int t;cin>>t;
    while(t--){
long long int a[100];
long long int n;cin>>n;
long long int v;cin>>v;
	for(long long int i=0;i<n;i++)
	cin>>a[i];
	cout<<binarySearch(a,n,v)<<" "<<binarySearch2(a,n,v)<<endl;
	
}
}
