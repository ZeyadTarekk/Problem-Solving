class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> freq1;
        unordered_set<int> freqans;
        
        vector<int> ans;
        for(int i =0;i<nums1.size();i++){
            if(freq1.find(nums1[i])==freq1.end())
                freq1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            if(freq1.find(nums2[i])!=freq1.end()&&freqans.find(nums2[i])==freqans.end()){
                ans.push_back(nums2[i]);
                freqans.insert(nums2[i]);
            }
        }
        return ans;
    }
};