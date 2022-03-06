class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> dic; 
        set<string> word_set;
        set<char> pattern_set;
        vector<string> words;
        istringstream iss(s);
        string word;
