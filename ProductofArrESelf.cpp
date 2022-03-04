class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>result;
        long long int p=1;
        int zero=0;
        for(auto i:nums){
            if(i!=0)
                p*=i;
            else
                zero++;
        }
        if(zero>1){
            for(auto i:nums)
                result.push_back(i*0);
        }
        else if(zero==0){
            for(auto i:nums){
                result.push_back(p/i);
            }
        }
        else{
            for(auto i:nums){
                if(i==0)
                    result.push_back(p);
                else
                    result.push_back(0);
            }
        }
        return result;
    }
};