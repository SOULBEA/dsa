#include <iostream>
using namespace std;

int main(){
  int n;
  cout<<"please enter a number: ";
  cin>>n;
  int count = 0;
  int i = 0;
  while(i<=n){
    int digit = n%10;
    count++;
    n = n/10;
    i++;
  }
  cout<<count<<endl;
  return 0;
}
