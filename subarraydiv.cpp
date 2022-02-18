int birthday(vector<int> s, int d, int m) {
    int count=0;
    if(m>s.size())
        return 0;
    else{
        for(int i=0;i<s.size()&&(i+m)<=s.size();i++){
            int sum=0;
            for(int j=0,k=i;j<m;j++,k++){
                sum+=s[k];
            }
            if(sum==d){
                count++;
            }
        }
    }
    return count;
}
