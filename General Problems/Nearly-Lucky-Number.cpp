#include<iostream>
#include<string>
using namespace std;
int main(){
  int no=0;
  string number;
  cin>>number;
  for(int i=0;i<number.length();i++){
    if(number[i]=='4'||number[i]=='7')
      no++;
  }
  if(no==4||no==7)
    cout<<"YES";
  else 
    cout<<"NO";
  return 0;
}