// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         int j=0;
//         int s=-1;
//         bool t=false;
//         for(int i=0;i<haystack.size()&&j<needle.size();i++){
//             if(haystack[i]==needle[j]){
//                 if(j==0)
//                     s=i;
//                 j++;
//                 t=true;
//             }   
//             else{
//                 t=false;
//                 s=-1;
//                 j=0;
//             }
//         }
//         if(needle.size()>haystack.size())
//             return -1;
//         if(needle.size()==0)
//             return 0;
//         else{
//             if(t)
//                 return s;
//             else
//                 return -1;
//         }
//         return -1;
//     }
// };

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack == needle) return 0;
        int n = haystack.length();
        int m = needle.length();
        if( m > n) return -1;
        string val = "";
        for(int i = 0; i < m; i++){
            val += haystack[i];
        }
        int i;
        for(i = m; i < n; i++){
            if(val == needle){
                return i-m;
            }
            val.erase(0,1);
            val += haystack[i];
        }
        if(val == needle) return i-m;
        return -1;
    }
};