  
/*A number n is given. Find out the minimum ways we can reach 1 from it.
We can:
1.) Subtract 1 from it. (n = n - ­1) ,
2.) If its divisible by 2, divide by 2.( if n % 2 == 0, then n = n / 2 ) ,
3.) If its divisible by 3, divide by 3. (if n % 3 == 0, then n = n / 3 ).  
RECURSIVE CODE
*/
int countMinStepsToOne(int n)
{
    if(n==1)
        return 0;
    
    int x=countMinStepsToOne(n-1);
    int y=INT_MAX;
    int z=INT_MAX;
    
    if(n%2==0)
       y=countMinStepsToOne(n/2);
    if(n%3==0)
        z=countMinStepsToOne(n/3);
    
    int ans=min(x,min(y,z))+1;
    
    return ans;
    
}
