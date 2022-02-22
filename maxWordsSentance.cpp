class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int result=0;
        for(auto i:sentences){
            int count=0;
            for(int j=0;j<i.length();j++){
                char ch[a]=i[j];
                if(ch==' '){
                    count++;
                }

            }
            count=count+1;
            if(result<count)
                result=count;
        }
        return result;
    }
};