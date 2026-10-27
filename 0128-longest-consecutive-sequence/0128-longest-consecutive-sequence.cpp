class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        unordered_set<int> hashSet;
        for(int num : nums){
            hashSet.insert(num);
        }
        int longest = 1;
        for(auto x : hashSet){
            if(hashSet.find(x-1) == hashSet.end()){
                int cnt = 1;
                int y = x;
                while(hashSet.find(y+1) != hashSet.end()){
                    y += 1;
                    cnt += 1;
                }
                longest = max(longest, cnt);
            }
        }
        return longest;
    }
};