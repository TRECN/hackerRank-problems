class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>temp;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                for(int k=0;k<nums.size();k++){
                    if(i!=j&&i!=k&&j!=k){
                        if(nums[i]+nums[j]+nums[k]){
                            continue;
                        }
                        else{
                            temp.push_back(nums[i]);
                            temp.push_back(nums[j]);
                            temp.push_back(nums[k]);
                        }
                        result.push_back(temp);
                        temp.clear();
                    }
                }
            }
        }
        return result;
    }
};