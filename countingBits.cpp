class Solution{
    public:
        vector <int> countBits(int n){
            vector<int> result;
            for(int i=0;i<n+1;i++){
                int s=0;
                int a=i;
                while(a>0){
                    s+=a%2;
                    a/=2;
                }
                result.push_back(s);
            }
            return result;
        }
};