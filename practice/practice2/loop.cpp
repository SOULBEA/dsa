// print number from 1 to n where the n is the user input
#include<iostream>
using namespace std;

void loop1(int n){
  int i = 1;
  while(i<=n){
    cout<<i<<" ";
    i++;
  }
}

void loop2(int n){
  for(int i = 1; i<=n; i++){
    cout<<i<<" ";
  }
}

int main(){
  int n;
  cout<<"please enter range: ";
  cin>>n;
  //loop1(n);
  loop2(n);
  return 0;
}
