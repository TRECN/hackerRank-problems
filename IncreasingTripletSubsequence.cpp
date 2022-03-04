class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int a=INT_MAX;
        int b=INT_MAX;
        bool ans = false;
        for(auto i=0;i<nums.size();i++){
            if(nums[i]<a)a=nums[i];
            else if(nums[i]>a and nums[i]<b)b=nums[i];
            if(nums[i]>a and nums[i]>b){
                ans = true;
                break;
            }
        }
        return ans;
    }
};