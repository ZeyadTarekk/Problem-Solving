class Solution {
public:
    int lengthOfLastWord(string s) {
        int startIdx=0;
        int endIdx = s.length()-1;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==' '&&s[i+1]!=' ')
                startIdx = i+1;
        }
        for(int i=s.length()-1;i>0;i--){
            if(s[i]==' '&&s[i+1]!=' '&&i!=s.length()-1)
                break;
            if(s[i]==' '&&s[i-1]!=' '){
                endIdx = i-1;
                cout<<"Entered\n";
                cout<<endIdx;

            }
        }
        cout<<startIdx<<" "<<endIdx<<" "<<s.length()-1<<endl;
        return endIdx - startIdx +1;
    }
};