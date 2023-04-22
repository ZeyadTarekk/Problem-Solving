class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i] =='[')
                st.push(s[i]);
            else {
                if(st.empty())
                    return false;
                char c = st.top();
                st.pop();
                if(s[i]==')'){
                    if(c!='(')
                        return false;
                }else if(s[i]==']'){
                    if(c!='[')
                        return false;

                }else {
                    // }
                    if(c!='{')
                        return false;
                }
            }
        }
        return st.empty();
        // return true;
    }
};