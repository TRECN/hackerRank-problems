
        for(auto ch:ransomNote)
           {
               if(ranMap[ch]>magMap[ch])
                return false;
           }
           return true;
            
        
    }
};