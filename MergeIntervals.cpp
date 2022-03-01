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
        int max=intervals[0][1];        
        for(int i=1;i<intervals.size();i++)
        {   
            if(intervals[i][0]<=max){
                
                if(intervals[i][1]>max)
                    max=intervals[i][1];
                              
            }
            else
                result.push_back({s,max});
                
                s=intervals[i][0];
                max=intervals[i][1];
                
            }
            if(i==intervals.size()-1)
                {
                    result.push_back({s,max});
                }
        }
        
        return result;
    }
};