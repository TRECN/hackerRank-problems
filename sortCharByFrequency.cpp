class Solution {
public:
    string frequencySort(string s) {
        string str="";
        unordered_map<char, int>ch;
        for(int i=0;i<s.length();i++)
            ch[s[i]]++;
        priority_queue<pair<int,char>>pq;
        for(auto it:mp)
            pq.push({it.second,it.first});
        while(!pq.empty()){
            int num = pq.top().first;
            char ch=pq.top().second;

            for(int i=0;i<num;i++)
                str+=ch;

            pq.pop();
        }
        return str;
    }
};