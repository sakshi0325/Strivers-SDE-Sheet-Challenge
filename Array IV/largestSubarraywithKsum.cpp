int maxLen(vector<int>&A, int n)
    {  
        int sum = 0;
        map<int,int> mp;
        int longest_sub = 0;
        mp[0] = -1;
        for(int i=0; i<n; i++){
            sum+=A[i];
            if(mp.find(sum) != mp.end()){
                longest_sub = max(longest_sub, i-mp[sum]);
            }
            else
                mp[sum] = i;
        }
        return longest_sub;
        
    }