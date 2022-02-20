class Solution {
public:
    bool isPerfectSquare(int num) {
        long l=1;
        long r=x;
        long m;
        while(l<=r){
            m=(l+r)/2;
            if(m*m==x){
                return true;
            }
            else if(m*m<x)
                l=m+1;
            else
                r=m-1;
        }
        return false;
    }
};