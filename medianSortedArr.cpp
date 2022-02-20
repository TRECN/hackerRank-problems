class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>a;
        for(int i=0;i<nums1.size();i++){
            a.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            a.push_back(nums2[i]);
        }
        sort(a.begin(),a.end());
        int n=a.size();
        int median=0;
        double result;
        if(n%2!=0){
            median=((n+1)/2)-1;
            result=a[median];
        }
        else{
            median=(n/2);
            
            result =(a[median]+a[median+1])/2.0;
        }
        return result;

    }
};