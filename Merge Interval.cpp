class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        vector<vector<int>> output;
        if(v.size() <= 0) return output;
        
        sort(v.begin(),v.end());
        
        output.push_back(v[0]);
        vector<int> temp;
        for(int i=1;i<v.size();i++){
            temp = output.back();
            if(temp[0] <= v[i][0] && temp[1] >= v[i][0]){
                temp[0] = min(temp[0],v[i][0]);
                temp[1] = max(temp[1],v[i][1]);
                output.pop_back();
                output.push_back(temp);
            }else{
                output.push_back(v[i]);
            }
        }
        return output;
    }
};
