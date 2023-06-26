int majorityElement(vector<int>& nums) {
        int maj = 0, count = 0;
        for (int i=0; i<nums.size(); i++)
        {
            if(count==0) maj=nums[i];
            count += (maj==nums[i])?1:-1;
        }
        count = 0;
        for (int i=0; i<nums.size(); i++)
        {
            if(nums[i]==maj) count++;
        }
        if(count>(nums.size())/2) return maj;
        return 0;

    }