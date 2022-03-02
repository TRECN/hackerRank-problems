class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      int c=1;
        int i=0,j=0;
        vector<vector<int>> result(n,vector<int>(n,-1));
        while(c<=n*n){   
            while(j<n&&result[i][j]==-1){ 
                result[i][j]=c;     
                c++;
                j++;
            }
             j--;
             i++;
            while(i<n&&result[i][j]==-1){   
                result[i][j]=c;     
                c++;
                i++;
            }
            i--;
            j--;
             while(j>=0&&result[i][j]==-1){
                result[i][j]=c;     
                c++;
                j--;
            }
             i--;   
             j++;
         
             while(i>=0&&result[i][j]==-1){
                result[i][j]=c;     
                c++;
                i--;
            }
            i++;
            j++;
            
        }
        
        return result;
    }
};