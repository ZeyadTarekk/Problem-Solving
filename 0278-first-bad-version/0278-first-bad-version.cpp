// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:


    int firstBadVersion(int n) {
        int low = 0, high=n;
        int badV;
        while(low<=high){
            int middle = low + (high - low)/2;
            if(isBadVersion(middle)){
                badV = middle;
                high = middle-1;
            }else {
                low = middle+1;
            }
        }
        return badV;
    }
};