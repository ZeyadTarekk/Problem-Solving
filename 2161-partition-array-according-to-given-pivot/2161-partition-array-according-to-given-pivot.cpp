class Solution {
public:

    void reverseArr(vector<int>&nums,int p,int e){
        cout<<e<<" "<<p<<endl;
        
        while(p<e){
            int dum = nums[p];
            nums[p] = nums[e];
            nums[e] = dum;
            p++;
            e--;
        }
    }

    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        vector<int> ans(nums.size());
        int begin =0;
        int end = nums.size()-1;
        int pivotFreq=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>pivot)
                ans[end--] = nums[i];
            else if(nums[i]<pivot)
                ans[begin++] = nums[i];
            else 
                pivotFreq++;
        }
        while(pivotFreq--){
            ans[begin++] = pivot;
        }
        reverseArr(ans,begin,nums.size()-1);
        return ans;
    }
};