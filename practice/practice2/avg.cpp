#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"please enter range: ";
  cin>>n;
  int i = 1;
  int sum =0;
  while(i<=n){
    int num;
    cout<<"enter your respective number: ";
    cin>>num;
    sum = sum+num;
    i++;

  }
  
  cout<<sum/n;
  return 0;
}
