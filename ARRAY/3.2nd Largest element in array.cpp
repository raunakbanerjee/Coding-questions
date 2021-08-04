class Solution
{
public:
    int print2largest(int arr[], int arr_size)
    {
      int first=INT_MIN;
        int second=INT_MIN;
        for(int i=0;i<arr_size;i++){
            if(arr[i]>first){
            second=first;
            first=arr[i];}
            if((arr[i]>second)&&(arr[i]!=first))
            second=arr[i];
        }
        if(second==INT_MIN)//this means arr[i]>first never got satisfied
        return -1;
        return second;
    	//code here.
    }

};
