#include<iostream>
#include<string>
using namespace std;
int main(){ 
  string instruction;
  cin>>instruction;
  for(int i=0;i<instruction.length();i++){
    if(instruction[i]=='H'||instruction[i]=='Q'||instruction[i]=='9'){
      cout<<"YES";
      return 0;
    }
  }
  cout<<"NO";
  return 0;
}