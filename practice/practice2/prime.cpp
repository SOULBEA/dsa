#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"please enter any number: ";
  cin>>n;
  for(int i = 2; i<=n-1; i++){
    if(n%i==0){
      cout<<"Not prime"<<endl;
      break;
    }
  }
  cout<<"prime";
  return 0;
}
