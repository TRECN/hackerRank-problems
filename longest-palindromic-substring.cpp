class Solution {
public:
    
    string longestPalindrome(string s) {
        
        int l_max = 0;
        int ans = 1;
        
        for(int i=1; i<s.length(); i++){
            
            int l = i-1;
            int r = i;           
                       
            while(l>=0 && r<s.length() && s[l] == s[r]){
                
                if((r-l+1) > ans){
                    ans = r-l+1;
                    l_max = l;
                }
                l--;
                r++;
            }
			
            l = i-1;
            r = i+1;
            
            while(l>=0 && r<s.length() && s[l] == s[r]){
                
                if((r-l+1) > ans){
                    ans = r-l+1;
                    l_max = l;
                }
                l--;
                r++;
            }
        }
        return s.substr(l_max, ans);
    }
};