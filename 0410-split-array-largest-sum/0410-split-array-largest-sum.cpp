class Solution {
public:
    int students(vector<int> &nums, int pages){
        int students = 1, currpage = 0;
        for(int i = 0; i<nums.size(); i++){
            if(currpage + nums[i] <= pages){
                currpage += nums[i];
            }
            else{
                students++;
                currpage = nums[i];
            }
        }
        return students;
    }
    int splitArray(vector<int>& nums, int k) {
        if(k>nums.size()) return -1;

        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while(low<=high){
            int mid = low+(high-low)/2;
            if(students(nums, mid)>k) low = mid+1;
            else high = mid-1;            
        }
        return low;
    }
};