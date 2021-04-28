#include<iostream>
using namespace std;

//check arr[1] to n is sorted and if a[0]<a[1] our work is done


// {1,2,3,4,5}
bool sorted(int a[],int n){
	
	if(n==0||n==1)
	return true;
	
	
	if(a[0]>a[1])
	return false;
	
	bool small=sorted(a+1,n-1);
	if(small){
		return true;
		else
		return false;
	}
	
	

}
int main(){
	
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
	cin>>a[i];
cout<<	sorted(a,n);
}
