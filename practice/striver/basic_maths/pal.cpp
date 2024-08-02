#include <iostream>
using namespace std;

int main(){
  int n;
  cout<<"please enter a nubmer: ";
  cin>>n;
  int i = 0; 
  int rev = 0;
  int sum = 0;
  int dup = n;
  while(i<=n){
    int digit = n%10;
    n = n/10;
    rev = (rev*10)+digit;
    i++;
  }

  if(dup == rev){
    cout<<"palindrome";
  }
  else cout<<"not palindrome";
}
