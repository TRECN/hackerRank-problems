class Solution {
public:
    bool isHappy(int n) {
        int a=n;
        int s,r;
        while(true){
                r=a%10;
                s=s+(r*r);
                a=a/10;
                if(s==0){
                    return false;       
                }
                if(s==1)
                    return true;
                if(a==0){
                    a=s;
                    s=0;
                }
        }
        return false;
    }
};