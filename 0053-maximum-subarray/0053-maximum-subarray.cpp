#include<algorithm>
using namespace std;

class Solution {
public:

    int maxSubArray(vector<int>& nums) {
        vector<int> dp(nums.size());
        dp[0] = nums[0];
        int max = dp[0];
        for(int i=1;i<nums.size();i++){
            dp[i] = nums[i]+ std::max(dp[i-1],0);
            max = std::max(max,dp[i]);
        }
        return max;
    }
};