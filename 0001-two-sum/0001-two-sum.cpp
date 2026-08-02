class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<pair<int, int>> arr;
        for(int k = 0; k < nums.size(); k++)
        {
            arr.push_back({nums[k], k});
        }
        sort(arr.begin(), arr.end());
        int i = 0;
        int j = nums.size() - 1;

        while (i < j)
        {
            int sum = arr[i].first + arr[j].first;
            if (sum == target)
            {
                return {arr[i].second , arr[j].second};
            }
            else if (sum < target)
            {
                i++;
            }
            else
                j--;
        }
    return {};
    }
};