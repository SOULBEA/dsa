#include<iostream>
using namespace std;

int main(){
  int a, b, c;
  cout<<"enter first value : ";
  cin>>a;
  cout<<"enter second value: ";
  cin>>b;
  cout<<"enter thrid value: ";
  cin>>c;

  if(a>b && a>c){
    cout<<a<<" is greater"<<endl;
  }
  else if(b>a && b>c){
    cout<<b<<" is greater"<<endl;
  }
  else cout<<c<<" is greater"<<endl;
  return 0;
}
