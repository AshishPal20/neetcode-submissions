class Solution {
public:
    int maxArea(vector<int>& heights) {
      int maxWater =0;
      int n = heights.size();

      for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            int width = j-i;

            int height = min(heights[i], heights[j]);
            int area = height * width;

            maxWater = max(maxWater, area);
        }
      }  
      return maxWater;
    }
};
