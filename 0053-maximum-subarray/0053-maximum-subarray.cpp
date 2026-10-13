class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxNum = INT_MIN;
        int sum = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            sum = sum + nums[i];
            maxNum = max(maxNum, sum);
            if(sum<0){
                sum = 0;
            }
        }
        return maxNum;
    }
};