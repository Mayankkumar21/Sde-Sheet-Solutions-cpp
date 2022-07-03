int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0,start=prices[0],maxi,mini;
        for(int i=1;i<n;i++){
            int cost=prices[i]-start;
            
            profit=max(profit,cost)   ;    
            start=min(start,prices[i]);
        }
        return profit;
        
    }
