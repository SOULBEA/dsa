#include <iostream>
using namespace std;

int mulit(int n);

int main(){
  int n;
  cout<<"please enter number: ";
  cin>>n;
  mulit(n);

  return 0;
}

int mulit(int n){
  int mulity;
  for(int i = 1; i<=10; i++){
    mulity = i*n;
    cout<<mulity<<endl;
  }
  
  return mulity;
}
