class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int idx;

        while(start <= end){
            int mid = start + (end - start)/2;
            cout<<mid<<" ";
            if(target == nums[mid])
                return mid;
            else if(target > nums[mid]){
                idx = mid + 1;
                start = mid+1;
            }else {
                idx = mid;
                end = mid -1;
            }
        }
        if(idx <0)
            return 0;
        return idx;
    }
};