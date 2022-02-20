class Solution {
public:
    bool isHappy(int n) {
        int a=n;
        int s,r;
        while(a>0){
            if(a!=1){
                r=a%10;
                s=s+(r*r);
            }
        }
    }
};