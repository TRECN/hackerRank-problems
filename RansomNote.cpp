class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int r=ransomNote.length();
        int m=magazine.length();
        if(r<m){
            for(int i=0;i<m&&(i+r)<=m;i++){
                if(ransomeNote==magazine.substr(i,r)){
                    return true;
                }
            }

        }
        else if(r==m&&ransomeNote==magazine){
            return true;
        }
        return false
    }
};