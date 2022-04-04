#include<iostream>
#include<string>
using namespace std;
void func(int n){
  if(n>0){
    if(n==1)
      cout<<n;
    else 
      cout<<n<<' ';
    func(n-1);
  }
  return;

}
int main(){ 
  int n;
  cin>>n;
  func(n);
}