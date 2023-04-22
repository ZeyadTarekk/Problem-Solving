class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0,sum = 0;
        unordered_map<int,int> ans;
        ans[0] = 1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(ans.find(sum - k)!=ans.end())
                count+=ans[sum-k];
            if(ans.find(sum)==ans.end())
                ans[sum] = 1;
            else 
                ans[sum]++;
        }
        return count;
    }
};