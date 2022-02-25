class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sum=0;
        for(auto a:digits){
            sum=sum*10+a;
        }
        sum+=1;
        vector<int>result;
        while(sum){
            result.push_back(sum%10);
            sum/=10;
        }
        reverse(result.begin(),result.end());
        return result;
    }
};