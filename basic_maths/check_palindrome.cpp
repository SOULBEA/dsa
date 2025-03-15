#include <iostream>
using namespace std;

int main(){
  int n;
  cout<<"please enter a number; ";
  cin>>n;
  int dup = n;
  int rev = 0;
  while(n>0){
    int last_digit = n%10;
    rev = (rev * 10) + last_digit;
    n = n/10;
  }
  if(dup == rev){
    cout<<"palindrom";
  }
  else{
    cout<<"not palindrom";
  }
  return 0;
}
