class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left =0, right = nums.size() - 1;
        vector<int> ans(nums.size());
        for(int k=right;k>=0;k--){
            if(abs(nums[left]) >= abs(nums[right])){
                ans[k] = nums[left] * nums[left++];
            }else{
                ans[k] = nums[right] * nums[right--];

            }
        }
        
        // sort(nums.begin(),nums.end());
        return ans;
    }
};