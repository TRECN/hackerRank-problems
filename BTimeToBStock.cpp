class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int dif=0;
        int min=INT_MAX,max=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }
            max=prices[i]-min;
            if(dif<max){
                dif=max;
            }
        }
        return dif;
    }
};