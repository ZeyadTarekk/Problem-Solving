class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size());
        int product = 1;
        bool zero = false;
        bool multipleZeros = false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
                product *= nums[i];
            else if(zero)
                multipleZeros = true;
            else
                zero = true;
        }
        for(int i=0;i<nums.size();i++){
            if(multipleZeros)
               {
                    nums[i] = 0;
                    continue;
                    }
            if(nums[i]!=0){
                if(!zero)
                ans[i] = product / nums[i];
                else 
                ans[i] = 0;
                
            }
            else 
                ans[i] = product;
        }

        return ans;
    }
};