#include<iostream>
#include<string>
using namespace std;

void func(int n){
  if(n==0)
    return;
  cout<<"I love Recursion\n";
  func(n-1);
}

int main(){
  int n;
  cin>>n;
  func(n);
}