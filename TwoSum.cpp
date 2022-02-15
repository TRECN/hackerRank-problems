class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> count;
        for (int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    count.push_back(i);
                    count.push_back(j);
                    return count;
                }
            }
        }
    }
};