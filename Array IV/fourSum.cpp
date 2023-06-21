vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        vector<vector<int>> result;
        int n = nums.size();
        for(int i=0; i<n-3; i++)
        {
            for(int j=i+1; j<n-2; j++)
            {
                int k = j+1, l=n-1;
                while(k<l)
                {
                    long long sum = ((long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[l]);
                    if(sum>target) l--;
                    else if(sum<target) k++;
                    else 
                    {
                        s.insert({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                    }
                }
            }
                
            }
        for(auto x:s)
        {
            result.push_back(x);
        }
        return result;
    }