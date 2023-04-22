class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while(left<=right){
            while (left < right && nums[left] == nums[left + 1])left++;
            while (left < right && nums[right] == nums[right - 1]) right--;
            int mid = left + (right - left)/2;
            if(nums[mid]==target)
                return true;
            else if(nums[left]<=nums[mid]){
                // the left part is sorted
                if(target>=nums[left] && target<nums[mid]){
                    right =mid -1; 

                }else {
                    left = mid + 1;
                }
            }else {
                // the right part is sorted
                if(target > nums[mid] && target <=nums[right])
                    left = mid + 1;
                else 
                    right = mid - 1;

            }

        }
        return false;
    }
};