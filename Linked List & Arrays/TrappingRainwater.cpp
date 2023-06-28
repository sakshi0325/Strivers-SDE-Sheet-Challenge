int trap(vector<int>& height) {
        int n = height.size();
        int res = 0;
        vector<int> left(n-1);
        vector<int> right(n-1);
        int l = height[0];
        int r = height[n-1];
        for(int i=1; i<n-1; i++)
        {
            l = max(l,height[i]);
            left[i] = l;
        }
        for(int i=n-2; i>0; i--)
        {
            r = max(r,height[i]);
            right[i] = r;
        }
        for(int i = 1; i<n-1; i++)
        {
            
            res = res + (min(left[i], right[i]) - height[i]);
        }
        return res;
    }