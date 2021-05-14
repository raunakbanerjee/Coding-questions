/*
Given two strings tell how many deletions required to make both of them anagrams

I/P: cde
     abc

O/P   4
Remove d and e from cde to get c.
Remove a and b from abc to get c.
Delete characters have to be deleted to make both strings anagrams.

So I will be creating two freq arrays for s1 and s2.Then I am storing the char's of both s1,s2 in their respective freq arrays.
So for given input arr1 would be---[0,0,1,1,1] and arr2 is [1,1,1,0,0]
To figure out the number of del I am basically taking into account the absolute sum of (arr1[i]-arr2[i]),thats my answer.
*/
 

int makingAnagrams(string s1, string s2) {
    int sum=0;
int arr1[256]={0};
int arr2[256]={0};
int n=s1.length();
int n2=s2.length();
for(int i=0;i<n;i++)
    arr1[s1[i]-97]++;

for(int i=0;i<n2;i++)
arr2[s2[i]-97]++;

for(int i=0;i<256;i++){
   sum=sum+abs(arr1[i]-arr2[i]);
}
return sum;
}
