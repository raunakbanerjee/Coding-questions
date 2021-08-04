/*
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

*/



class Solution {
public:
    
        void rotate(vector<int>& nums, int k) {
      int n=nums.size();
        k=k%n;  // this is done as for array of length 5, k=1 and k=6 would be the same thing only.
       reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
        
    }
    void reverse(vector<int> &nums,int i,int j){
       //  i=0;
        int n=nums.size();
       //  j=n-1;
        while(i<j){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
        }
        
    }  
  
};
