int getTotalX(vector<int> a, vector<int> b) {
    int n=a[a.size()-1];

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
