
			
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