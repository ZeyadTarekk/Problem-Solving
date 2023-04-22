class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        int r =0,l=s.length()-1;
        cout<<(int)s[0]<<" "<<(int)s[1];
        while(r<l){
            if(s[r]==' ' || !((((int)s[r] >= 'a' &&(int)s[r] <= 'z') ||((int)s[r]>=48 && (int)s[r]<=57 )))){
                r++;
                cout<<"Entered first";
                continue;
            }
            if(s[l]==' ' || !((((int)s[l] >= 'a' &&(int)s[l] <= 'z') ||((int)s[l]>=48 && (int)s[l]<=57 )))){
                l--;
                continue;
            }
            if(s[r]!=s[l]){
                cout<<r<<" "<<l<<endl;
                cout<<s[r]<<" "<<s[l]<<endl;
                return false;
            }

            r++;
            l--;
        }
        return true;
    }
};