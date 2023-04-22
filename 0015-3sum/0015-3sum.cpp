class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2 ;i++){
            if(i>0 &&nums[i]==nums[i-1])
                continue;
           int left = i+1;
           int right = nums.size() - 1;

           while(left < right){
               int sum = nums[left] + nums[right] + nums[i];
               if(sum ==0){
                    ans.push_back({nums[left] , nums[right] , nums[i]});
                    
                    left++;
                    right--;
                    while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right + 1]) {
                        right--;
                    }
               }
                else if(sum>0){
                    right--;
                }else if(sum<0){
                    left++;
                }
           }
        }
        return ans;
    }
};