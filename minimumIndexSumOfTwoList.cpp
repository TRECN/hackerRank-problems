class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> m;
        int i = 0;
        for(auto it: list1){
            m[it] = i;
            i++;
        }
        i = 0;
        priority_queue< pair<int,string>, vector< pair<int,string> >, greater< pair<int,string> > > pq;
        for(auto it: list2){
            if(m.count(it)){
                m[it] += i;
                pq.push({m[it], it});
            }
            i++;
        }
        vector<string> ans;
        if(pq.empty()){
            return ans;
        }
        int num = pq.top().first;
        while(!pq.empty() && pq.top().first == num){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};