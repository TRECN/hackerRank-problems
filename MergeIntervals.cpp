class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()==1)
        {
            return intervals;
        }
        vector<vector<int>> result;        
        sort(intervals.begin(),intervals.end());        
        int s=intervals[0][0];
        int maxi=intervals[0][1];        
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<=maxi){
                
                if(intervals[i][1]>maxi)
                    maxi=intervals[i][1];
                              
            }
            else
            {      
                result.push_back({s,maxi});
                
                s=intervals[i][0];
                maxi=intervals[i][1];
                
            }
            if(i==intervals.size()-1)
                {
                    result.push_back({s,maxi});
                }
        }
        
        return result;
    }
};