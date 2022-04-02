// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int result=0;
//         int count=0;
//         for(auto a:nums){
//             for(int i=0;i<nums.size();i++){
//                 if(a==nums[i]){
//                     count++;
//                 }
//             }
//             if(count>=2){
//                 result=a;
//                 break;
//             }
//             else{
//                 count=0;  
//             }
//         }
//         return result;
//     }
// };

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int low = 1, high = nums.size() - 1, count;
        
        while(low <=  high)
        {
            int mid = low + (high - low) / 2;
            count = 0;
            for(int n : nums)
            {
                if(n <= mid)
                    ++count;
            }
            if(count <= mid)
                low = mid + 1;
            else
                high = mid - 1;
            
        }
        return low;
    }
};