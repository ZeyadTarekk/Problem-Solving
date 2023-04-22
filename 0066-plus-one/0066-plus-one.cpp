class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        bool newVector = false;
        while(digits[i]==9){
            digits[i] = 0;
            if(i==0){
                newVector = true;
                break;
            }
            i--;
        }
        if(newVector){
            vector<int> ans(digits.size()+1,0);
            ans[0]= 1;
            return ans;
        }else {
            digits[i]++;
            return digits;
        }
    }
};