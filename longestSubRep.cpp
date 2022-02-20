class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string str="";
        string result="";
        char pre=' ';
        for(int i=0;i<s.length();i++){
            for(int j=i;j<s.length();j++){
                char ch=str[j];
                if(pre!=ch){
                    str+=ch;
                    pre=ch;
                }
                else{
                    pre=' ';
                    if(str.size()>result.size())
                        result=str;
                    str="";
                }

            }
        }
        return result.size();
    }
};