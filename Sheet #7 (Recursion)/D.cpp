#include<iostream>
#include<string>
using namespace std;

void func(string str, int index){
  if(index == str.size())
    return;
  cout<<str[index]<<' ';
  func(str,index+1);
}

int main(){
  int n;
  cin>>n;
  string s;
  for(int i=0;i<n;i++){
    cin>>s;
    func(s,0);
    if(i!=n-1)
      cout<<endl;
  }
  return 0;
}