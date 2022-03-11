// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>>result;
//         vector<int>temp;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size();i++){
//             for(int j=0;j<nums.size();j++){
//                 for(int k=0;k<nums.size();k++){
//                     if(i!=j&&i!=k&&j!=k){
//                         if(nums[i]+nums[j]+nums[k]){
//                             continue;
//                         }
//                         else{
//                             temp.push_back(nums[i]);
//                             temp.push_back(nums[j]);
//                             temp.push_back(nums[k]);
//                         }
//                         result.push_back(temp);
//                         temp.clear();
//                     }
//                 }
//             }
//         }
//         return result;
//     }
// };

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i) {
            if (i == 0 || nums[i] != nums[i-1]) {
              int left = i + 1, right = nums.size() - 1;
              while (left < right) {
                  int sum = nums[i] + nums[left] + nums[right];
                  if (sum == 0) {
                      result.insert({nums[i], nums[left], nums[right]});
                      left++;
                      right--;
                  }else if (sum < 0) {
                     left++;
                  }else {
                      right--;
                  }
              }
            }
        }
        return {result.begin(), result.end()};
    }
};