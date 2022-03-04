class Solution {
public:
    int mySqrt(int x) {
        if(x!=0){
            long l=1;
            long r=x;
            long m;

            while(l<=r){
                m=(l+r)/2;
                if(m*m==x)
                    return m;
                else if(m*m<x)
                        l=m+1;
                else
                    r=m-1;

            }
            return l-1;
        }
        return 0;
    }
};