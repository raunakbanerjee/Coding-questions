/*  IP--> 1 3 5 6, K=6..  O/P--->True as 1+5=6 exists in array */



bool solve(vector<int>& nums, int k) {
    int i = 0;
    int n = nums.size();
    int j = n - 1;
    int sum;

    while (i < j) {  // i and j cant be equal as they cant be the same number
        sum = nums[i] + nums[j];
        if (sum == k) return true;
        if (sum > k) j--;
        if (sum < k) i++;
    }
    return false;
}
