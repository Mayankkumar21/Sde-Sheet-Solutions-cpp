 void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int breakpoint=-1;
        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                breakpoint=i-1;
                break;
            }
        }
        if(breakpoint<0){
            reverse(nums.begin(),nums.end());
            return;
        }
        else{
            for(int i=n-1;i>=0;i--){
                if(nums[i]>nums[breakpoint]){
                    
                    swap(nums[breakpoint],nums[i]);
            reverse(nums.begin()+breakpoint+1,nums.end());
                    break;
                }
            }
        }
        
    }
