class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int k=10;
        int l=s.size();
        int i=0;
        int j=0;
        string t="";
        vector<string>result;
        unordered_map<string,int>m;
        while(j<l){
            t=t+s[j];
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                m[t]++;
                t=t.substr(1);
                i++;
                j++;
            }
        }
        for(auto a:m){
            if(a.second>1){
                result.push_back(a.first);
            }
        }
        return result;

    }
};