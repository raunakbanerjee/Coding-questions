#include<iostream>
using namespace std;
int main()
{
	int n;cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int i=0;
	int temp;
	for(int j=0;j<n;j++)
	{
		if(a[j]<0){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			i++;
		}
	}
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}

//
