class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int>money;
        for(int i=0;i<accounts.size();i++){
            int sum=0;
            for(int j=0;j<accounts[0].size();j++){
                sum+=accounts[i][j];
            }
            money.push_back(sum);
        }
        sort(money.begin(),money.end());
        return money[accounts.size()-1];
    }
};