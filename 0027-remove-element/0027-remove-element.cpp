class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        while(i<n && j<n){
            if(nums[i] == val) i++;
            else{
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
        }
        return j;
    }
};