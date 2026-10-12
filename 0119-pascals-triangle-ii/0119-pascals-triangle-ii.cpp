class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> temp;
        int r = rowIndex + 1;
        long long elem = 1;
        temp.push_back(elem);
        for(int i = 1; i<r; i++){
            elem = elem * (r-i);
            elem = elem / i;
            temp.push_back(elem);
        }
        return temp;
    }
};