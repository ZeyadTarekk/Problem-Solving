#include<iostream>
#include<string>
using namespace std;
int main(){
  string x1,x2;
  string newString = "";
  cin>>x1>>x2;
  for(int i=0;i<x1.length();i++){
    if(x1[i]==x2[i])
      newString+='0';
    else
      newString+='1';
  }
  cout<<newString;
}