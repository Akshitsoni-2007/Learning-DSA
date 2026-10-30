class Solution {
public:
    int first(vector<int>& arr, int x){
        int left = 0, right = arr.size()-1;
        int mid;
        int ans = -1;
        while(left<=right){
            mid = (left+right)/2;
            if(arr[mid]==x){
                ans = mid;
                right = mid-1;
            }
            else if(arr[mid]<x) left = mid+1;
            else right = mid-1;
        }
        return ans;
    }
    int last(vector<int>& arr, int x){
        int left = 0, right = arr.size()-1;
        int mid;
        int ans = -1;
        while(left<=right){
            mid = (left+right)/2;
            if(arr[mid]==x){
                ans = mid;
                left = mid+1;
            }
            else if(arr[mid]<x) left = mid+1;
            else right = mid-1;;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {first(nums, target), last(nums, target)};
    }
};