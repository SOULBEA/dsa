#include<iostream>
using namespace std;

void f(int i, int n){
  // printing name n times
  if(i>n)
    return;
  cout<<"snorlax"<<endl;
  f(i+1, n);
}

void printnum(int i, int n){
  if(i>n)
    return;
  cout<<i<<endl;
  printnum(i+1, n);
}

void rev(int i, int n){
  if(i<0){
    return;
  }
  cout<<i<<endl;
  rev(i-1, n);
}

void back(int i, int n){
  if(i<1)
    return;
  back(i-1, n);
  cout<<i<<endl;
}

int main(){
  int n;
  cout<<"enter range: ";
  cin>>n;
  //f(1, n);
  //printnum(1, n);
  //rev(n, n);
  back(1, n);
  return 0;
}

