#include <iostream>
using namespace std;

int main(){
  int n;
  cout<<"please enter a number: ";
  cin>>n;
  int count = 0;
  for(int i = 1; i<=n; i++){
    if(n%i == 0){
      if(n/i != 1){
        count++;
      }
    }
    if (count == 2) {
      cout<<"prime number"; }
    else cout<<"not prime number";
  }
  return 0;
}
