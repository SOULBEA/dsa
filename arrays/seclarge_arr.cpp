#include <iostream>
#include <climits>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }
  int largest = arr[0];
  int sec_lar = arr[0];
  for(int i = n-2; i>=0; i--){
    if(arr[i]!=largest){
      sec_lar = arr[i];
      break;
    }
  }
  cout<<sec_lar;
  return 0;
}
