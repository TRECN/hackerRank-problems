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

