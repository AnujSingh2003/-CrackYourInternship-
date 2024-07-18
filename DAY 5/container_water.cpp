class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int maxarea=0;
        int j=height.size()-1;
        while(i<j){
            int wid=j-i;
            int hei=min(height[i],height[j]);
            int area=wid*hei;
            maxarea=max(maxarea,area);
            if(height[i]<height[j])i++;
            else j--;
        }
        return maxarea;
    }
};