class Solution {
public:
    int romanToInt(string s) {
        int n=s.length();
        unordered_map<char,int>rom;
        rom.insert({'I',1});
        rom.insert({'V',5});
        rom.insert({'X',10});
        rom.insert({'L',50});
        rom.insert({'C',100});
        rom.insert({'D',500});
        rom.insert({'M',1000});
        int ans=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='V' && i>0 && s[i-1]=='I'){
                ans+=4;
                --i;
            }
            if(s[i]=='X' && i>0 && s[i-1]=='I'){
                ans+=9;
                --i;
            }
            if(s[i]=='L' && i>0 && s[i-1]=='X'){
                ans+=40;
                --i;
            }
            
            if(s[i]=='C' && i>0 && s[i-1]=='X'){
                ans+=90;
                --i;
            }
            
            if(s[i]=='D' && i>0 && s[i-1]=='C'){
                ans+=400;
                --i;
            }
            
            if(s[i]=='M' && i>0 && s[i-1]=='C'){
                ans+=900;
                --i;
            }
        }
    }
};