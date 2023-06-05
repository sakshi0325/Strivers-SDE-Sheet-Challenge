void nextPermutation(vector<int>& nums) {
        int index = -1;
        for(int i=nums.size()-1; i>0; i--)
        {
            if(nums[i-1]<nums[i]){ 
                index = i-1;
                break;
            }
        }
        if(index==-1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        for(int i=nums.size()-1; i>=0; i--)
        {
            if(nums[i]>nums[index]){
                swap(nums[index], nums[i]);
                break;
            }
        }
        reverse(nums.begin()+index+1,nums.end());
    }