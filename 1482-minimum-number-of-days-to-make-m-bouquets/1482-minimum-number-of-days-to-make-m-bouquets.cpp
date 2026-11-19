class Solution {
public:
    bool isPossible(vector<int>& nums, int k, int m, int day){
        int cnt = 0;
        int noB = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]<= day){
                cnt++;
                if(cnt == k){
                    noB++;
                    cnt = 0;
                    if(noB>=m) return true;
                }
            }
            else{
                cnt = 0;
            }
        }
        noB += (cnt/k);
        if(noB >= m) return true;
        else return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        if((double)m*k > bloomDay.size()) return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int ans;

        while(low<=high){
            int mid = low+(high-low)/2;

            if(isPossible(bloomDay, k, m, mid) == true){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};