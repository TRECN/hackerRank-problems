class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>result;
        for(int i=0;i<n;i++){
            int k=i+1;
            if(k%5==0&&k%3==0)
                result.push_back("FizzBuzz");
            else if(k%3==0)
                result.push_back("Fizz");
            else if(k%5==0)
                result.push_back("Buzz");
            else
                {
                    string s=to_string(k);
                    result.push_back(s);
                }
        }
        return result;
    }
};