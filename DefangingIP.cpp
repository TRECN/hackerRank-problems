class Solution {
public:
    string defangIPaddr(string address) {
        string a="";
        for(auto i:address){
            if(i=='.')
                a+="[.]";
            else    
                a+=i;
        }
        return a;
    }
};