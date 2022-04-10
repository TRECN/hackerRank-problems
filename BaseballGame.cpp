class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>a1;
        for(auto a:ops){
            if(a=="C")
                a1.pop();
            else if(a=="D")
                a1.push(a1.top()*2);
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
        int result=0;
        while(a1.size()!=0){
            result+=a1.top();
            a1.pop();
        }

        return result;
    }
};