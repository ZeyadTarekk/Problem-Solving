class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index(2);
        map<int,int> freq;
        for(int i=0;i<nums.size();i++){

            if(freq.find(target - nums[i])!=freq.end()){
                index[0] = i;
                index[1] = freq[target - nums[i]];
                return index;
            }

            freq[nums[i]] = i;
        }

       
        return index;
    }
};