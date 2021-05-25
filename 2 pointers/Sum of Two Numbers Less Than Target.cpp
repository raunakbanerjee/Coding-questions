/*
nums = [5, 1, 2, 3]
target = 4
Output: 3
*/



int solve(vector<int>& nums, int target) {
    int n=nums.size();
sort(nums.begin(),nums.end());
int i=0;
int j=n-1;
int sum;
int ans=nums[0]+nums[1];  //as array is sorted this is the min possible ans that can possibly occur.
while(i<j){
sum=nums[i]+nums[j];  
if(sum>=target)
j--;
if(sum<target){
ans=max(sum,ans);
i++;

}
}
return ans;
}
