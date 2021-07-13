/* Aim is to find char in string with highest freq.
So I'll basically store all of em in the hashmap and then find out whose freq is the highest.

*/

I/P--> abbca
O/P--> a

char getMaxOccuringChar(string str)
    {
        int max=0;
        char ans;
        int n=str.size();
        map<char,int> map1;
        for(int i=0;i<n;i++)
        map1[str[i]]++; //Storing elements in map
        for(auto it=map1.begin();it!=map1.end();it++){   
            if(it->second > max){   //Iterating in maps and figuring out whose it->second is the highest.
            max=it->second;
            ans=it->first;
        }
        }
        return ans;

    
Q2. Number of occurence of highes occuring character
    I/P--> abbca
    O/P--> 3 (as a occurs thrice)
    
    
 #include <iostream>
    using namespace std;

    int MostFrequentCharaceter(char str[]){
   unordered_map<char,int> map1;
  if(str[0]=='\0')
    return -1;
  int n=strlen(str);
        for(int i=0;i<n;i++)
        map1[str[i]]++; 
  int max=0;
  int ans;
  for(auto it=map1.begin();it!=map1.end();it++){  
    if(it->second>max)
      max=it->second;
  ans=max;
  }
  return ans;
}
    
int main(){
  char s[100];
  cin>>s;
  cout<<MostFrequentCharaceter(s);
}
    
