class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>ranMap;
        map<char, int>magMap;
        for(auto ch:ransomNote)
            ranMap[ch]++;
            
        for(auto ch:magazine)
            magMap[ch]++;

        for(auto ch:ransomNote)
           {
               if(ranMap[ch]>magMap[ch])
                return false;
           }
           return true;
            
        
    }
};