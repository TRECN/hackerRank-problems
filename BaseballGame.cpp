class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>a1;
        for(auto a:ops){
            if(a=="C")
                a1.pop();
            else if(a=="D")
                a1.push(a.top*2);
            else if(a=="+"){
                int t=a1.top();
                a1.pop();
                t=t+a1.top();
                a1.push(t-a1.top());
                a1.push(t);
            }
            else{
                a1.push(stoi(a));
            }
            
        }
        auto result;
        for(auto i:a1){
            result+=i;
        }

        return i;
    }
};