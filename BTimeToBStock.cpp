class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int dif=0;
        for(int i=0;i<prices.size()-1;i++){
            for(int j=i+1;j<prices.size();j++){
                int a=prices[i]-prices[j];
                if(dif<a){
                    dif=a;
                }
            }
        }
        return dif;
    }
};