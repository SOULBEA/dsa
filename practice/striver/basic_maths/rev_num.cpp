#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"please enter a number: ";
  cin>>n;
  int rev = 0;
  int i = 0;
  while(i<=n){
    int digit = n%10;
    n = n/10;
    rev = (rev *10)+digit;
    i++;
  }
  cout<<rev<<endl;
  return 0;
}
