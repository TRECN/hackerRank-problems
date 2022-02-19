class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>m;
        
        for(long i=0;i<s.length();i++){
            m[s[i]]++;
        }             
         int count=-1;
         for(int j=0;j<s.length();j++){
             if(m[s[j]]==1){
                count=j;
                break;
             }
         }
          return count;
    }
   
};