class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>ar;
        for(int i:nums){
            ar.push_back(nums[i]);
        }
        return ar;
    }
};