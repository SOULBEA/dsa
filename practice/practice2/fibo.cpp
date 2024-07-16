#include<iostream>
using namespace std;

int main(){
  int n, a, b, c;
  int i = 1; 
  while(i <= n){
    c = a+b;
    cout<<c<<" ";
    a = b;
    c = b;
    i++;
  }
  return 0;
}
