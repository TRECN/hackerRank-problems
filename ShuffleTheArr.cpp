class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>x;
        vector<int>y;
        vector<int>result;
        for(int i=0;i<n;i++){
            x.push_back(nums[i]);
        }
        for(int i=n;i<2*n;i++){
            y.push_back(nums[i]);
        }
        for(int i=0,j=0,k=0;i<2*n;i++){
            if(i%2==0){
                result.push_back(x[j]);
                j++;
            }
            else{
                result.push_back(y[k]);
                k++;
            }
        }

        return result;
    }
};