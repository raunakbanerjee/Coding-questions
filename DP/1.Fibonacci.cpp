#include<iostream>
using namespace std;
//BOTTOM UP APPROACH
int fib(int n)
{
int *ans=new int[n+1];
ans[0]=1;
ans[1]=1;
for(int i=2;i<=n;i++){
	ans[i]=ans[i-1]+ans[i-2];
}
return ans[n];
}
int main(){
	int n;
	cin>>n;
	cout<<fib(5);
}
