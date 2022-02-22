class Solution {
public:
    int reverse(int x) {
        int result=0;
        while(x!=0){
            if(result<INT_MIN||result>INT_MAX)
                return 0;
            int r=x%10;
            result=result*10+r;
            x/=10;
        }
        return result;
    }
};