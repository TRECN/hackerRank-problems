class Solution {
public:
    int reverse(int x) {
        long result=0;
        int y=abs(x);
        while(y>0){
            if(result<INT_MIN||result>INT_MAX)
                return 0;
            int r=y%10;
            result=result*10+r;
            y/=10;
        }
        if(x>=0)
        return result;
        else
        return (-result)
    }
};