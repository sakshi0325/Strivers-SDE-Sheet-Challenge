 int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        int res;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]>1) res = nums[i];
        }
        return res;