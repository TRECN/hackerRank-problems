class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result=0;
        sort(nums.begin(),nums.end());
        if(nums[nums.size()-1]==nums.size()){
            for(int i=0;i<nums.size()-1;i++){
            int a=nums[i+1]-nums[i];
            if(a==1)
                continue;
            else if(a>1){
                result=1+nums[i];
                break;
            }
        }
        }
        else{
            return nums.size();
        }
        return result;
    }
};