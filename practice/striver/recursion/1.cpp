#include<iostream>
using namespace std;

void printnum(int n){
  cout<<n<<" ";
  printnum(n);
}


void printnum2(int num, int n){
  for(int i = 0; i<n; i++){
    if(i ==n){
      cout<<num<<" ";
    }
  }
  printnum2(num, n);
}

int main(){
  int n;
  cout<<"please enter range: ";
  cin>>n;
  int num;
  cout<<"please enter number: ";
  cin>>num;
  printnum2(num, n);
  return 0;
}
