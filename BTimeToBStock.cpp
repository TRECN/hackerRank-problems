class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int dif=INT_MIN;
        for(int i=0;i<prices.size()-1;i++){
            for(int j=i+1;j<prices.size();i++){
                
                if(dif<abs(prices[i]-prices[j]))
                    
            }
        }
    }
};