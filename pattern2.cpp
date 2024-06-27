#include<iostream>
using namespace std;

void printpat(int n){
  for (int i = 0; i<n; i++){
    for (int j = 0; j<i; j++){
      cout<<"*";
    }
    cout<<endl;
  }
}

int main(){
  int n;
  cout<<"please enter the range: ";
  cin>>n;
  printpat(n);
  cin>>n;
  return 0;
}
