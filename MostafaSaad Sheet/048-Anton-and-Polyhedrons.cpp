#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string s;
  int no=0;
  while(n--)
  {
    cin>>s;
    if(s=="Tetrahedron")
      no+=4;
    else if(s=="Cube")
      no+=6;
    else if(s=="Octahedron")
      no+=8;
    else if(s=="Dodecahedron")
      no+=12;
    else if(s=="Icosahedron")
      no+=20;
  }
  cout<<no;
  return 0;
}