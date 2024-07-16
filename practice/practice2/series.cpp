#include<iostream>
using namespace std;

int main(){
  int n, a, d, i;
  cout<<"please enter range: ";
  cin>>n;
  cout<<"please enter first number: ";
  cin>>a;
  cout<<"please enter common differnece: ";
  cin>>d;
  i = 1;
  while(i<=n){
    cout<<a+(i*d)<<endl;
    i++;
  }
  return 0;
}
