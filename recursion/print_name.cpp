#include <iostream>
using namespace std;

void f(int i, int n){
  if(i>n){
    return;
  }
  cout<<"baki"<<endl;
  f(i+1, n);
}

int main() {
  int n;
  cout<<"enter range: ";
  cin>>n;
  f(1, n);
  return 0;
}
