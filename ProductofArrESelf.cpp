class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>result(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j!=i)
                    result[i]*=nums[j];
            }
        }
        return result;
    }
};