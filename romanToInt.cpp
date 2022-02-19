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
        
    }
};