vector<int> breakingRecords(vector<int> scores) {
    int max=scores[0];
    int min=scores[0];
    int maxC=0;
    int minC=0;

    for(int i=0;i<scores.size();i++){
        if(max<scores[i]){
            maxC++;
            max=scores[i];
        }
        if(min>scores[i]){
            minC++;
            min=scores[i];
        }
    }
    vector <int> result;
    result.push_back(maxC);
    result.push_back(minC);
    return result;
}