class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result;
        for (auto i:nums){
            result.push_back(i);
        }   
        for (auto i:nums){
            result.push_back(i);
        }  
        return result;
    }
};