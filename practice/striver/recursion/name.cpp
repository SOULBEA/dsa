#include <iostream>
using namespace std;

int count = 1;

void printname(int n){
  if(count == n){
    return;
  }
  cout<<count<<"raj"<<endl;
  count++;
  printname(n);
}

int main(){
  int n;
  cout<<"please enter range: ";
  cin>>n;
  printname(n);
  return 0;
}
