class Solution {
public:
    int firstUniqChar(string s) {
        int count=0;
        for(int i=0;i<s.length();i++){
            for(int j=0;j<s.length();j++){
                if(s[i]==s[j]){
                    count++;
                }
            }
            if(count==1)
                return i;
        }
        return -1;    
    }
};