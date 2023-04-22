class Solution {
public:

    static bool cmp(pair<int, int>& a,
        pair<int, int>& b)
        {
            return a.second > b.second;
        }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        map<int,int> map;
        

        for(int i=0;i<nums.size();i++){
            if(map[nums[i]]==0)
                map[nums[i]]=1;
            else 
                map[nums[i]]++;
        }

        vector<pair<int, int> > A;
        for (auto& it : map) {
        A.push_back(it);
            }

        sort(A.begin(),A.end(),cmp);
        
        vector<int> ans;

        for(int i=0;i<k;i++){
            ans.push_back(A[i].first);
        }

        return ans;

    }
};