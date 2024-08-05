#include<iostream>
using namespace std;


void print_n(int i, int n){
  if(i>n){
    return;
  }
  cout<<i<<" "<<endl;
  print_n(i+1, n);
}

int main(){
  int n;
  cout<<"please enter range: ";
  cin>>n;
  int i;
  cout<<"please enter a number to start with: ";
  cin>>i;
  print_n(i, n);
  return 0;
}
