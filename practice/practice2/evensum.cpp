#include <iostream>
using namespace std;

int main(){
  int n, sum;
  cout<<"please enter range: ";
  cin>>n;
  sum = 0;
  for(int i= 2; i<=n; i = i+2){
    sum = sum+i;
    cout<<sum<<" ";
  }
  return 0;
}
