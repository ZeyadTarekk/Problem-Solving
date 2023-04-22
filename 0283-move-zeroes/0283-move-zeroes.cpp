class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastEl = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
                nums[lastEl++] = nums[i];
        }
        for(int i=lastEl;i<nums.size();i++){
            nums[i]=0;
        }
    }
};