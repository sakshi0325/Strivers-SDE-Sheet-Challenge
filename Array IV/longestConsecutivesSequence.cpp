int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if(n==1 || n == 0) return n;
        int count = 1, res = 1;
        for(int i=1; i<n; i++)
        {
            
            if(nums[i-1]+1 == nums[i])
            {
                 count++;
            }
            else if(nums[i-1] == nums[i]) continue;
            
            else 
            {
                count=1;
            }
            res = max(count, res);
        }
        return res;
    }