class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int k = 1;
        int i = 0;
        int j = 1;
        while(i<nums.size() && j<nums.size())
        {
            if(nums[i] == nums[j])
            {
                j++;
            }
            else{
                swap(nums[i+1], nums[j]);
                i++;
                j++;
                k++;
            }
        }
        return k;      
    }
};