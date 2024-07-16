#include <iostream>
using namespace std;

int main(){
  int a, b, c;
  cout<<"please enter first number: ";
  cin>>a;
  cout<<"please enter second number: ";
  cin>>b;
  cout<<"please enter third number: ";
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
