/* Basic idea is I wanna make all the negative numbers posittive and they I will sort the array and square all the nums.That's it.

I/P: nums = [-9, -2, 0, 2, 3]
O/P: [0, 4, 4, 9, 81]

*/



vector<int> solve(vector<int>& nums) {
   int n=nums.size();
   for(int i=0;i<n;i++){
       if(nums[i]<0)
       nums[i]=-1*nums[i];
   }
   sort(nums.begin(),nums.end());

   for(int i=0;i<n;i++){
       nums[i]=nums[i]*nums[i];
   }
   return nums; 
}
