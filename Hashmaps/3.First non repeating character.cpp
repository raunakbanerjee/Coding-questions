/*
So basically first I shalle be appending all the elements in the map.Then I will see which element has a freq of 1 and return it.


*/

char nonrepeatingCharacter(string S)
    {
        int n=S.length();
        unordered_map<char,int> map1;
        for(int i=0;i<n;i++){
            map1[S[i]]++;
        }
        for(int i=0;i<n;i++){
            if(map1[S[i]]==1)  
            return S[i];
            
        }
       
  //if there is no non rep char I am returning the dollar symbol
       return '$';
    }
