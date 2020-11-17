class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        if(heights.size() == 0) return 0;
        
        stack<int> s;
        int area = 0;
        
        for(int i = 0; i <= heights.size(); i++){
            while(!s.empty() && (i == heights.size() || heights[s.top()] > heights[i])){
                int height = heights[s.top()];
                s.pop();
                int width = (!s.empty()) ? i - s.top() -1 : i;
                area = max(area, height * width);
            }
            s.push(i);
        }
        return area;
    }
};
