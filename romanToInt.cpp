class Solution {
public:
    int romanToInt(string s) {

        for(int i=n-1;i>=0;i--){
            if(s[i]=='V' && i>0 && s[i-1]=='I'){
                ans+=4;
                --i;
            }
            else if(s[i]=='X' && i>0 && s[i-1]=='I'){
                ans+=9;
                --i;
            }
            else if(s[i]=='L' && i>0 && s[i-1]=='X'){
                ans+=40;
                --i;
            }
            
            else if(s[i]=='C' && i>0 && s[i-1]=='X'){
                ans+=90;
                --i;
            }
            
            else if(s[i]=='D' && i>0 && s[i-1]=='C'){
                ans+=400;
                --i;
            }
            
            else if(s[i]=='M' && i>0 && s[i-1]=='C'){
                ans+=900;
                --i;
            }
            else    
                ans+=rom[s[i]];
        }
        return ans;
    }
};