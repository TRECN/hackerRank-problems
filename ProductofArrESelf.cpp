class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums[size];
        vector<int>result(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n&&j!=i;j++){
                result[i]*=nums[j];
            }
        }
    }
};