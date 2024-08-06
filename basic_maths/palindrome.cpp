#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"please enter a number: ";
  cin>>n;
  int rev = 0;
  int dup = n;
  int i = 0;
  while(i<=n){
    int digit = n%10;
    n = n/10;
    rev = (rev*10)+digit;
    i++;
  }
  if(rev == dup){
    cout<<"palindrom"<<endl;

  }
  else cout<<"not palindrome"<<endl;
  return 0;
}
