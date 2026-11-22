class Solution {
public:
    bool possDays(vector<int>& arr, int cap, int maxDays){
        int day = 1, load = 0;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i]+load>cap){
                day++;
                load = arr[i];
            }
            else{
                load+=arr[i];
            }
        }
        return day<=maxDays;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        long long high = accumulate(weights.begin(), weights.end(), 0LL); 

        while(low<=high){
            int mid = low+(high-low)/2;

            if(possDays(weights, mid, days)){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};