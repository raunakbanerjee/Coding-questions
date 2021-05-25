/*
I/P--->[0,1,2,1,0]
O/0--->[1,2,1,0,0]  */



vector<int> solve(vector<int>& nums) {
    int n=nums.size();
    int k=0;
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
        nums[k]=nums[i];
       k++;}
    }

    for(int i=k;i<n;i++)
    nums[i]=0;

    return nums;
}
