class Solution {
public:
    bool backspaceCompare(string s, string t) {
       stack<char> first;
       stack<char> second;
       for(int i=0;i<s.length();i++){
           if(s[i]=='#'){
               if(!first.empty())
                first.pop();
           }else {
               first.push(s[i]);
           }
       }
       for(int i=0;i<t.length();i++){
           if(t[i]=='#'){
               if(!second.empty())
                second.pop();
           }else {
               second.push(t[i]);
           }
       }
       if(second.size()!=first.size())
        return false;
        while(!second.empty()){
            char firstCh = first.top();
            char secondCh = second.top();
            cout<<firstCh<<" "<<secondCh<<endl;
            if(firstCh!=secondCh)
                return false;
            first.pop();
            second.pop();
        }
        return true;
    }
};