class Solution {
public:

    int bsearch(vector<int>& numbers, int target,int left, int right){
        while(left<=right){
            int middle = left + (right - left)/2;
            if(numbers[middle]==target)
                return middle;
            else if(numbers[middle]>target){
                right = middle - 1;

            }else if(numbers[middle]<target){
                left = middle + 1;

            }
        }
        return -1;
    }

    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans(2);
        for(int i=0;i<numbers.size();i++){
            int index = bsearch(numbers,target - numbers[i], i+1, numbers.size()-1);
            if(index!=-1){
                cout<<target - numbers[i]<<" "<< numbers[i]<<" "<<index<<endl;
                ans[0] = i+1;
                ans[1] = index+1;
                return ans;
            }
        }
                return ans;
    }
};