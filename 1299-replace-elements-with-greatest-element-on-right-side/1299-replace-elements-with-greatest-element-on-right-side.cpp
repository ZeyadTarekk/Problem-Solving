class Solution {
public:
    int findMax(vector<int>&arr,int begin,int end){
        int maxNo = arr[begin];
        for(int i=begin+1;i<end;i++){
            if(arr[i]>maxNo)
                maxNo = arr[i];
        }
        return maxNo;
    }
    vector<int> replaceElements(vector<int>& arr) {
        int len = arr.size();
        vector<int> maxArr(len);
        maxArr[len - 1] = arr[len - 1];
        for(int i=len - 2;i>=0;i--){
            maxArr[i] = max(maxArr[i+1],arr[i]);
        }

        for(int i=0;i<len -1;i++){
            arr[i] = maxArr[i+1];
        }
        arr[len - 1] = -1;
        return arr;
    }
};