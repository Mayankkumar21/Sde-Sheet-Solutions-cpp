int majorityElement(vector<int>& nums) {
        int count=0;
        int number;
        for(auto it:nums){
            if(count==0){
                number=it;
            }
            if(number==it) count++;
            else count--;
        }
        return number;
    }
