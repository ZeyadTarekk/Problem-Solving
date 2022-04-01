#include<iostream>
#include<string>
using namespace std;
int main(){ 
  string s1,s2;
  cin>>s1>>s2;
  if(s1.length()!= s2.length()){
    cout<<"NO";
    return 0;
  }
  int length = s1.length();
  for(int i=0;i<length;i++)
    if(s1[i]!=s2[length - 1 -i]){
      cout<<"NO";
      return 0;
    }
  cout<<"YES";
  return 0;
}