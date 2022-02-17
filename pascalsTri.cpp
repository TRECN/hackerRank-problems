class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result(numRows);
        result[0].push_back(1);
        if(numRows!=1){
            result[1].push_back(1);
            result[1].push_back(1);
            vector<int>prv=result[1];
            for(int i=0;i<numRows-2;i++){
                vector<int>edg;
                edg.push_back(1);
                for(int j=0;j<prv.size()-1;j++)
                    edg.push_back(prv[j]+prv[j+1]);
                edg.push_back(1);
                result[i+2]=edg;
                prv=edg;
            }
        }
        return result;
    }
};