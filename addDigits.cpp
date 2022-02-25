class Solution {
public:
    int addDigits(int num) {
        int sum=0;
        while(num){
            sum=sum*10+(num%10);
            num/=10;
        }
        if(sum<10)
            return sum;
        else    
            addDigits(sum);
    }
};