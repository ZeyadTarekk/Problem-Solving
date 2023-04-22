class Solution {
public:
    string addBinary(string a, string b) {
        int l1 = a.length() - 1;
        int l2 = b.length() - 1;
        int sum =0;
        string s="";
        while(sum || l1>=0 || l2>=0){
            if(l1>=0){
                sum+=a[l1]=='1'?1:0;
                l1--;
            }
            if(l2>=0){
                sum+=b[l2]=='1'?1:0;
                l2--;
            }
            s = to_string(sum%2) + s;
            sum = sum/2;
            
        }
        return s;
    }
};