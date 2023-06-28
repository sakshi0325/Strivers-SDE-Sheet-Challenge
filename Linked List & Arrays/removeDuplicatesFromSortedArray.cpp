 int removeDuplicates(vector<int>& nums) {
        vector<int> v;
        int count=1;
        v.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]!=nums[i-1]) 
            {
                v.push_back(nums[i]);
                count++;
            }
        }
        for(int i=0; i<count; i++)
        {
            nums[i]=v[i];
        }
        return count;
    }