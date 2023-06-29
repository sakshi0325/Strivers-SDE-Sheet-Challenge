   vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        vector<vector<int>> result;
        int n = nums.size();
        int j , k=n-1;
        for(int i=0; i<n-2; i++)
        {
            j = i+1;
            k=n-1;
            while(j<k)
            {
                if((nums[i]+nums[j]+nums[k])>0) k--;
                else if(((nums[i]+nums[j]+nums[k])<0)) j++;
                else 
                {
                    s.insert({nums[i], nums[j], nums[k]});
                   
                    j++;
                    k--;
                }
            }
        }
        for(auto x:s)
        {
            result.push_back(x);
        }
        return result;
    }