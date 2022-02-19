class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>s1;
        map<char,int>t1;
        
        for(auto ch: s){
            s1[ch]++;
        }
        for(auto ch: t){
            t1[ch]++;
        }
        if(s.length()!=t.length())
            return false;
        for(auto ch: s){
            if(s1[ch]!=t1[ch])
                return false;
        }
        return true;
        
    }
};