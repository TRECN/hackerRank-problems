class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int result=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(result<nums[i])
                break;
            else if(result==nums[i])
                result++;

        }
        return result;
    }
};