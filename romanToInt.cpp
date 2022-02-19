class Solution {
public:
    int romanToInt(string s) {
        int n=s.length();
        unordered_map<char,int>rom;

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