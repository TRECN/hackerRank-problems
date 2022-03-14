class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        bool x=true;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                x=false;
                count++;
            }
           if(x==false && s[i]==' ')\
           {
               break;
           }
        }
        return count;
    }
};