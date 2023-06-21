vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
        sort(nums.begin(), nums.end());
        int count = 1, n = nums.size();
        if(n<3) result.push_back(nums[0]);
        for(int i=1; i<n; i++)
        {
            if(nums[i]==nums[i-1])
            {
                count++;
                if(count>(n/3)){ 
                    if(result.size()==0) result.push_back(nums[i]);
                    else 
                    {
                        if(result[result.size()-1]!=nums[i]) result.push_back(nums[i]);
                    }
                }
                
            }
            else count = 1;

        }
        return result;
    }