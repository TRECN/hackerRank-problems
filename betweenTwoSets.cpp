int getTotalX(vector<int> a, vector<int> b) {
    int n=a[a.size()-1];
    int m=b[b.size()-1];
    
    vector<int>result;
    for(int i=n;i<=m;i++){
        int count=0;
        for(int j=0;j<a.size();j++){
            if(i%a[j]==0){
                count++;
            }
        }
        if(count==a.size()){
            result.push_back(i);
        }
    }
    vector<int>fresult;
    for(int i=0;i<result.size();i++){
        int count=0;
        for(int j=0;j<b.size();j++){
            if(b[j]%result[i]==0)
                count++;
        }
        if(count==b.size())
            fresult.push_back(result[i]);
    }

    return fresult.size();
}
