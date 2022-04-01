#include<iostream>
#include<string>
using namespace std;
int main(){ 
  int no;
  int p,q;
  int ans =0;
  cin>>no;
  while(no--){
    cin>>p>>q;
    if(q-p>=2)
      ans++;
  }
  cout<<ans;
}