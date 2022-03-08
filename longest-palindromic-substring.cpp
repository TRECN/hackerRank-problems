class Solution {
public:
    
    string longestPalindrome(string s) {
        
        int max = 0;
        int result = 1;
        
        for(int i=1; i<s.length(); i++){
            
            int l = i-1;
            int r = i;           
                       
            while(l>=0 && r<s.length() && s[l] == s[r]){
                
                if((r-l+1) > result){
                    result = r-l+1;
                    max = l;
                }
                l--;
                r++;
            }
			
            l = i-1;
            r = i+1;
            
            while(l>=0 && r<s.length() && s[l] == s[r]){
                
                if((r-l+1) > result){
                    result = r-l+1;
                    max = l;
                }
                l--;
                r++;
            }
        }
        return s.substr(max, result);
    }
};