// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
            int l=0;
            int r=n-1;
            while(l<=r){
                int m=(l+r)/2;
                if(!isBadVersion(m))
                    l=m+1;
                else
                    r=m-1;
            }
            return r+1;
    }
};