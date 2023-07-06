vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        stack <int> s;
        
        for(int i=nums2.size()-1; i>=0; i--)
        {
                while(!s.empty() && s.top() < nums2[i]  )
                {
                    s.pop();
                }

                if(s.empty())
                {
                    mp[nums2[i]]=-1;
                    s.push(nums2[i]);
                }
                else
                {
                    mp[nums2[i]]=s.top();
                    s.push(nums2[i]);
                }
        }
        
        int j=0;
        vector<int> ans;
        for(auto x: nums1)
        {
            ans.push_back(mp[x]);
        }
        return ans;

    }