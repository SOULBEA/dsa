#include <iostream>
using namespace std;

int main(){
  int n;
  cout<<"please enter a number: ";
  cin>>n;
  int i = 2;
  while(i<=n-1){
    if(n%i==0){
      cout<<"not prime"<<endl;
      break;
    }
    else{
      cout<<"Prime"<<endl;

    }
    i++;
  }
  return 0;
}
