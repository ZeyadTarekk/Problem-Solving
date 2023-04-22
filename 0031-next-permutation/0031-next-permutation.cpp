class Solution {
public:

    void reverse(vector<int>&nums, int start, int end){
        while(start<end){
            int temp = nums[end];
            nums[end] = nums[start];
            nums[start] = temp;
            start++;
            end--;
        }
    }

    void nextPermutation(vector<int>& nums) {
        int minIdx = -1;
        int greaterNumber = INT_MAX;
        int greaterNumberIdx = -1;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                minIdx = i - 1;
                break;
            }
        }
        if(minIdx==-1){
            sort(nums.begin(),nums.end());
            return;
        }
        for(int i = minIdx+1;i<nums.size();i++){
            if(nums[i]>nums[minIdx]&&nums[i]<=greaterNumber){
                greaterNumber = nums[i];
                greaterNumberIdx = i;
            }
        }
        cout<<greaterNumberIdx<<endl;
        if(greaterNumberIdx==-1)
            return;

        int temp = nums[greaterNumberIdx];
        nums[greaterNumberIdx] = nums[minIdx];
        nums[minIdx] = temp;
        reverse(nums,minIdx+1,nums.size()-1);

    }
};