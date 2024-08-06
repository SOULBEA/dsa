#include <iostream>
using namespace std;

int main(){
  int n;
  cout<<"please enter range: ";
  cin>>n;
  int i = 0;
  int sum = 0;
  while(i<=n){
    int digit = n%10;
    n = n/10;
    sum = sum+(digit*digit*digit);
  }
  cout<<sum<<endl;
  return 0;
}
