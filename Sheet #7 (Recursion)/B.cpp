#include<iostream>
#include<string>
using namespace std;
void func(int n){
  if(n>0){
    func(n-1);
    cout<<n<<endl;
  }
  return;

}
int main(){ 
  int n;
  cin>>n;
  func(n);
}