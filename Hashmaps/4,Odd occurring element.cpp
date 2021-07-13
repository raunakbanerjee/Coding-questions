Sample Input:

5

2 2 3 1 1



Sample Output:

3
  
#include <iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
  int n;cin>>n;
  int a[100];
  for(int i=0;i<n;i++)
    cin>>a[i];
  vector<int> ans;
  unordered_map<int,int> map1;
  for(int i=0;i<n;i++)
    map1[a[i]]++;
  for(auto it=map1.begin();it!=map1.end();it++)
  {if(it->second==1)
      ans.push_back(it->first);
  }
  for(int i=0;i<ans.size();i++)
    cout<<ans[i];
}
