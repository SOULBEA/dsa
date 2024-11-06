#include <iostream>
using namespace std;

void num(int n, int i){
  if(i<1){
    return;
  }
  cout<<i<<" ";
  num(i-1, n);
}

int main (int argc, char *argv[]) {
  int n;
  cout<<"enter range: ";
  cin>>n;
  num(1, n);
  return 0;
}
