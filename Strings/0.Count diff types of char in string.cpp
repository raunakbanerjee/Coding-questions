/* count all uppercase,lowe,numbers and sp char in string
*/

void count (string s)
        {
            int u=0,l=0,n=0,o=0;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]>=65 && s[i]<=90)
                u++;
                else if(s[i]>=97 && s[i]<=122)
                l++;
                else if(s[i]>='0' && s[i]<='9')
                n++;
                else
                o++;
            }
             cout << "Upper case letters: " << u << endl;
    cout << "Lower case letters : " << l << endl;
    cout << "Number : " << n << endl;
    cout << "Special characters : " << o << endl;
            //code here.
        }
