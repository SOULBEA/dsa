#include <iostream>
using namespace std;

void f(int i, int n){
  if(i<1){
    return;
  }
  printf("%d", i);
  f(i-1, n);
}

int main(){
  int n;
  cout<<"enter a number: ";
  cin>>n;
  f(n, n);
  return 0;
}
