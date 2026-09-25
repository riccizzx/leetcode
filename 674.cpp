
#include <vector>
#include <iostream>

class Solution {
public:
    int findLengthOfLCIS(std::vector<int>& nums) {
        int ans = 1;

        for (int i = 1, count = 1; i < nums.size(); ++i) {
            
            if (nums[i - 1] < nums[i]) {
                ans = std::max(ans, ++count);
            } else {
                count = 1;
            
            }
        
        }     
        return ans;
    
    }
};
