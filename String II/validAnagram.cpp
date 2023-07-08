bool isAnagram(string s, string t) {
        int i = 0;
        if(s.size()!=t.size()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        while(i<s.size())
        {
            if(s[i]!=t[i]) return false;
            i++;
        }
        return true;
    }