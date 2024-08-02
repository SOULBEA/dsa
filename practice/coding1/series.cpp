#include<iostream>
using namespace std;

int main(){
  int n, a, d;
  cout<<"please enter first number: ";
  cin>>a;

  cout<<"please enter common difference :";
  cin>>d;

  cout<<"please enter range: ";
  cin>>n;

  int i =1;
  while(i<=n){
    cout<<a+i*d<<" ";
    i++;
  }
  return 0;
}
