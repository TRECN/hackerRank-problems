class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1,j=1;
        if(nums.size()!=1){
            
            while(i<nums.size()){
                if(nums[i-1]!=nums[i]){
                    nums[j]=nums[i];
                    j++;
                }
                i++;
            }
        }
        else    
            return 1;
        return j;
    }
};