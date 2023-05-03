class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2);
        vector<int> vec1;
        vector<int> vec2;
        unordered_set<int> set1;
        unordered_set<int> set2;
        for(int i=0;i<nums1.size();i++){
            set1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            set2.insert(nums2[i]);
        }
        
        for(auto x:set1){
            if(set2.find(x)==set2.end())
                vec1.push_back(x);
        }
        for(auto x:set2){
            if(set1.find(x)==set1.end())
                vec2.push_back(x);
        }
        ans[0]=vec1;
        ans[1]=vec2;
        return ans;
    }
};