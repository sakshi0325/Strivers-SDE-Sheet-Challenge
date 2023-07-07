string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int n = strs.size();
        string start = strs[0], end = strs[n-1], res = "";
        int i;
        for(i=0; i<start.size(); i++)
        {
            if(start[i]==end[i]) res += start[i];
            else break;
        }
        return res;
    }