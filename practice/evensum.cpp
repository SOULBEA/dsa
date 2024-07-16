#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"please enter the range: ";
  cin>>n;
  int sum = 0;
  int i = 2;
  while (i<=n) { 
    sum = sum+i;
    i = i+2;

  }
  cout<<"sum of all even number is = "<<sum<<endl;
  return 0;
}
