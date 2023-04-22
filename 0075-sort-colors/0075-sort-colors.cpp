class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z = 0, o = 0, t=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                z++;
            else if(nums[i]==1)
                o++;
            else 
                t++;
        }
        int idx=0;
        for(int i=0;i<z;i++)
            nums[idx++]=0;
        for(int i =0;i<o;i++)
            nums[idx++]=1;
        for(int i =0;i<t;i++)
            nums[idx++]=2;
        
    }
};