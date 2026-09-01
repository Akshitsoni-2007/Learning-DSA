class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
{
    vector<int> neg;
    vector<int> pos;

    for(int i = 0; i< nums.size(); i++)
    {
        if(nums[i]<0)
        {
            neg.push_back(nums[i]);
        }
        else{
            pos.push_back(nums[i]);
        }
    }

    if(neg.size() == 0)
    {
        for(int j = 0; j<pos.size(); j++){
            pos[j] = pos[j] * pos[j];
        }
        return pos;
    }

    if(pos.size() == 0)
    {
        for(int j = 0; j< neg.size(); j++){
            neg[j] = neg[j] * neg[j];
        }
        reverse(neg.begin(), neg.end());

        return neg;
    }

    for(int j = 0; j<neg.size(); j++){
        neg[j] = neg[j]*neg[j];
    }
    reverse(neg.begin(), neg.end());

    for(int j = 0; j<pos.size(); j++){
        pos[j] = pos[j] * pos[j];
    }

    int m = 0;
    int n = 0;
    vector<int> final;

    while(m<neg.size() && n<pos.size()){
        if(neg[m]<=pos[n])
        {
            final.push_back(neg[m]);
            m++;
        }
        else{
            final.push_back(pos[n]);
            n++;
        }
    }
    
    while(m<neg.size()){
        final.push_back(neg[m]);
        m++;
    }

    while(n<pos.size()){
        final.push_back(pos[n]);
        n++;
    }

    return final;
}
};