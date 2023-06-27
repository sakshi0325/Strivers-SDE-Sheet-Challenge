 int lengthOfLongestSubstring(string s) {
        int n = s.length();     
        if(n==0) return 0;  
        int len=1;
        for (int i=0; i<n; i++)
        {   
            unordered_map<char, int> mp;
            for(int j=i; j<n; j++)
            {
                if(mp.find(s[j])!=mp.end())
                {
                    len = max(len, j-i);
                    break;
                }
                mp[s[j]]++;
                if(j==n-1) len = max(len, j-i+1);
            }

        }
        return len;
    }