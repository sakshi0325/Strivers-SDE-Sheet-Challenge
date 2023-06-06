vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int i = 1;
        sort(intervals.begin(), intervals.end());
        while(i<intervals.size())
        {
            if(intervals[i-1][1]>=intervals[i][0])
            {
                int x = max(intervals[i-1][1], intervals[i][1]);
                intervals[i][0]=intervals[i-1][0];
                intervals[i][1] = x;
                intervals.erase(intervals.begin()+i-1);
            }
            else
            {
                i++;
            }
        }
        return intervals;