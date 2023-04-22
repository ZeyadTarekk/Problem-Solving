class Solution {
public:
    
    bool containsDuplicate(vector<int>& nums) {

        map<int,int> numbers;
        

        for(int i=0;i<nums.size()  ;i++){
            // cout<<numbers[nums[i]]<<endl;
            if(numbers[nums[i]]>=1)
                return true;
            else
                numbers[nums[i]]=1;
        }
        return false;
    }
};