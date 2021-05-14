/*Check if a given string is palindromic or not

I/P : abba  O/P- 1
I/P : heli  O/P- 0
*/



int isPlaindrome(string S)
	{
	    int i=0;
	    int j=S.length()-1;
	    while(i<j){
	        if(S[i]!=S[j])
	        return 0;
	        i++;
	        j--;
	    }
	    return 1;
	}

