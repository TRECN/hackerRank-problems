class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>a;
        for(auto a:ops){
            if(a=="C")
                a.pop;
            else if(a=="D")
                a.push(a.top*2);
            else if(a=="+"){
                int t=a.top();
                a.pop();
                t=t+a.top();
                a.push(t-a.top());
                a.push(t);
            }
            else{
                a.push(stoi(a));
            }
            
        }
        auto result;
        for(auto i:a){
            result+=i;
        }

        return i;
    }
};