// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//     }
// };
 class Solution {
 public:
     void sortColors(vector<int>& nums) {
        vector<int> c(3);
        int n = nums.size();
        
        for(auto num : nums){
            c[num]+=1;
        }
        for(int i=0;i<n;i++){
            if(c[0]>0){
                nums[i] = 0; c[0]--;
            }
            else if(c[1]>0){
                nums[i] = 1; c[1]--;
            }
            else{
                nums[i] = 2; c[2]--;
            }
        }
    }
 };
