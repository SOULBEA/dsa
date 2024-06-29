#include <iostream>
#include<math.h>
using namespace std;

void revnum(int n){
  int rev = 0;
  int count = 0;
  //int n;
  while(n>0){
    int last = n%10;
    n = n/10;
    rev = (rev*10)+last; // this will convert the number into reverse form
  }
  cout<<rev;
}

void pali(int n){
  //write a program to determine if given number is palindrome or not. Print true if it is palindrome. False othervise
  int rev = 0;
  int dup = n;
  while(n>0){
    int last = n%10;
    n = n/10;
    rev = (rev * 10) + last;

  }
  if (rev == dup){
    cout<<"Yes the number is palindrome";
  }
  else if(rev != dup){
    cout<<"No the number is not palindrome";
  }
  else{
    cout<<"invalid input";
  }
}

void armnumber(int n){
  // 371 = 3^3+7^3 + 1^3 = 371;
  int sum = 0;
  int dup = n;
  while(n>0){
    int last = n%10;
    n = n/10;
    sum = sum + (last * last * last);

  }
  if(sum == dup){
    cout<<"Yes this is an armstrongnumber";

  }
  else{
    cout<<"No this is an armstrongnumber";
  }
}

void printnum (int n){
  for(int i = 1; i<=n; i++){
    if(n%i == 0){
      cout<<i<<" ";
    }
  }
}

int main(){
  int n;
  cout<<"please enter some number: ";
  cin>>n;
  //revnum(n);
  //pali(n);
  //armnumber(n);
  printnum(n);
  return 0;
}
