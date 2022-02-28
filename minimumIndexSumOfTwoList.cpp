class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {

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