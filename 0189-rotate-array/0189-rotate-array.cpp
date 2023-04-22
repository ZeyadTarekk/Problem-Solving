class Solution {
public:

    void reverse(vector<int>& nums, int start, int end){
        while(start < end){
            int temp = nums[end];
            nums[end] = nums[start];
            nums[start] = temp;
            start++;
            end--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
         k = k % n;
        reverse(nums,0,n - 1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
    }
};