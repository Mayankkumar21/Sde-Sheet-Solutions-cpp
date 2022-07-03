class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        int m=intervals.size();
        if(m==0) return ans; // if size of given array is 0 then return empty array
        int n=intervals[0].size();
        sort(intervals.begin(),intervals.end()); //sort the given array to compare intervals
        ans.push_back(intervals[0]);
        int j=0;
        for(int i = 1 ; i < m;i++){//if the 2nd element of 1st array is larger than 1st element of 2nd array then we take the max of both the end_i
            if(ans[j][1]>=intervals[i][0]){ ans[j][1]=max(ans[j][1],intervals[i][1]);
        }
        else{j++; 
            ans.push_back(intervals[i]);
             }
            
        }
        return ans;
    }
};
