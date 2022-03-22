class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>x;
        for(auto i:nums){
            x.push_back(i*i);
        }
        sort(x.begin(),x.end());
        return x;
    }
};