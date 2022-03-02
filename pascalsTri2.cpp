class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int row=rowIndex+1;
        vector<vector<int>>result(row);
        result[0].push_back(1);
        if(row!=1){
            result[1].push_back(1);
            result[1].push_back(1);
            vector<int>prv=result[1];
            for(int i=0;i<row-2;i++){
                vector<int>edg;
                edg.push_back(1);
                for(int j=0;j<prv.size()-1;j++)
                    edg.push_back(prv[j]+prv[j+1]);
                edg.push_back(1);
                result[i+2]=edg;
                prv=edg;
            }
        }
        return result[row-1];
    }
};