class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> ans;
        int maxEl;
        int maxElFreq = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(ans.find(nums[i])==ans.end())
                ans[nums[i]] = 1;
            else 
                ans[nums[i]]++;
            
            if(ans[nums[i]]> maxElFreq){
                maxElFreq = ans[nums[i]];
                maxEl = nums[i];
            }
        }
        return maxEl;
    }
};