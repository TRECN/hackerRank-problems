class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int>m;
        int result;
        for(auto a:nums){
            m[a]++;
        }
        for(int i=0;i<nums.size();i++){
            if(!m[i].second){
                result=i;
            }
        }
        return result;
    }
};