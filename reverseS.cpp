class Solution {
public:
    string reverseString(vector& s) {
        int i = 0, j = s.size() - 1;
        vector m;
        while(j>=0){
            m.push_back(s[j]);
            j--;
        }
        s=m;
        return s;
    }
};n