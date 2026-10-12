class Solution {
public:
    vector<int> genRow(int r) {
        vector<int> temp;
        long long elem = 1;
        temp.push_back(elem);
        for(int i = 1; i<r; i++){
            elem = elem * (r-i);
            elem = elem / i;
            temp.push_back(elem);
        }
        return temp;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1; i <= numRows; i++){
            ans.push_back(genRow(i));
        }
        return ans;
    }
};