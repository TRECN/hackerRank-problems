class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, m;
        for(int a : nums){
            if(count==0)
                m=a;
            if(m==a)
                count++;
            else
                count--;
        }
        return m;
    }
};