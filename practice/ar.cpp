#include<iostream>
using namespace std;

// print arithmatic series:

int main(){
  int a, d;
  cout<<"please enter first number: ";
  cin>>a;
  cout<<"please enter the common differnece: ";
  cin>>d;

  int i = 1;
  while(i<=10){
    cout<<a+i*d<<endl;
    i++;
  }
  cout<<"Done!";
  return 0;
}
