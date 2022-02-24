class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int>m;
        
        for(long i=0;i<s.length();i++){
            m[s[i]]++;
        } 

        unordered_map<char,int>m1;
        
        for(long i=0;i<s.length();i++){
            m1[t[i]]++;
        }
        if(s.length()!=t.length()){
            return false;
        }
        for(int j=0;j<s.length();j++){
            if(m[s[j]]!=m1[t[j]]){
                return false;
            }
        }
        return true; 
    }
};