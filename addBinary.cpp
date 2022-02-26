class Solution {
public:
    string addBinary(string a, string b) {
        int i, j,carry=0,sum=0,first,second;
        string s="";
        i=a.length()-1;
        j=b.length()-1;

        while(i!=-1||j!=-1||carry){
            if(i!=-1)
                first =int(a[i--]-48);
            else 
     