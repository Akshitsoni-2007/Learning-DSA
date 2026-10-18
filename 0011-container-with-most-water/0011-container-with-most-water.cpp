class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int max_water = 0;

        while(left < right){
            max_water = max(max_water, min(height[left], height[right]) * (right-left));

            if(height[left]>height[right]){
                right--;
            }
            else{
                left++;
            }
        }

        return max_water;
    }
};