int lengthOfLongestSubstring(string s){
    unordered_set<char>a;

    int i=0,j=0,n=s.size(),result=0;

    while(i<n&&j<n){
        if(a.find(s[j])==a.end()){
            a.insert(s[j++]);
            result=max(result,j-i);
        }
        else{
            a.erase(s[i++]);
        }
    }
    return result;
}