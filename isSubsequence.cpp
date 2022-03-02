class Solution {
public:
    bool isSubsequence(string s, string t) {
        vector<int>s1;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            for(int j=0;j<t.size();j++){
                char ch=t[j];
                if(c==ch)
                    s1.push_back(j);
            }
        }
        int min=INT_MIN;
        if(s1.size()==s.size){
            for(auto i:s1){
            if(min<i)
                min=i;
            else
                return false;
        }
        }
        return true;
    }
};