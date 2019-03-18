//Best Time to Buy and Sell Stock II
//https://leetcode.com/explore/featured/card/top-interview-questions-easy/92/array/564/

class Solution {
public:
    int maxProfit(vector<int>& a) {
        
        if(a.size()<2)
            return 0;
        int res = 0;
        for(int i = 0; i < a.size()-1; ++i)
                if(a[i+1]>a[i])
                    res += (a[i+1]-a[i]);
        return res;
    }
};