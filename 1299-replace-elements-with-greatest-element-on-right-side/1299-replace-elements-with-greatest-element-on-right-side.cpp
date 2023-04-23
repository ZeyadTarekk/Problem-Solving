class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int len = arr.size();
        int maxNo = INT_MIN;
        int temp = arr[len-1];
        for(int i=len - 2;i>=0;i--){
            maxNo = max(maxNo,temp);
            // cout<<maxNo<<" "<<arr[i+1]<<endl;
            temp=arr[i];
            arr[i] = maxNo;
        }
        arr[len - 1] = -1;
        return arr;
    }
};