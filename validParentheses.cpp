class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        for(auto i:s){
            if(i=='('||i=='{'||i=='[')
                st.push(i);
            else{
                if(st.empty())
                    return false;
                if((st.top()=='('&&i==')')||(st.top()=='{'&&i=='}')||(st.top()=='['&&i==']'))
                    st.pop();
                else
                    return false;
            }
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};