class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int ze=0;
        vector<int>x;
        for(auto i:nums){
            if(i!=0)
                x.push_back(i);
            else
                ze++;

        }
        while(ze--){
            x.push_back(0);
        }
        nums=x;
    }
    
};