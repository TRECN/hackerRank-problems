class Solution {
public:
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>Mtar;
        
        for(int i=0;i<matrix.size();i++){
            Mtar=matrix[i];
            int l=0;
            int r=Mtar.size()-1;
                while(l<=r){
            int m=l+(r-l)/2;

            if(Mtar[m]==target)
                return true;

            if(Mtar[m]<target)
                l=m+1;
            else    
                r=m-1;
        }
        }
        return false;
        
    }
};