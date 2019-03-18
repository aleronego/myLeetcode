//Remove Duplicates from Sorted Array
//https://leetcode.com/explore/featured/card/top-interview-questions-easy/92/array/727/

class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        for(auto it = a.begin(); it != a.end(); ++it)
        {
            auto j = it+1;
            while(j!=a.end() && *it == *j)
                a.erase(j);
        }
    return a.size();
    }
};