#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int sum = 0; 
  int i = 1;
  int num;
  while(i<=n){
    cin>>num;
    sum = sum+num;
    i++;
  }
  cout<<sum/n<<" ";
  return 0;
}
