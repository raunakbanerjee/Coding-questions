/* Aim is to find char in string with highest freq.
So I'll basically store all of em in the hashmap and then find out whose freq is the highest.

*/

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
