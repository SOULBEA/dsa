#include <iostream>
using namespace std;

void num(int i, int n){
  if(i>n){
    return;
  }
  cout<<i<<" ";
  num(i+1, n);
}

int main (int argc, char *argv[]) {
  int n;
  cout<<"enter range: ";
  cin>>n;
  num(1, n);
  return 0;
}
