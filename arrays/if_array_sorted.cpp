#include <iostream>
using namespace std;

int is_sorted(int n, int arr[]){
  for(int i = 1; i<=n; i++){
    if(arr[i]>=arr[i-1]){
      cout<<"sorted";
    }
    else{
      return false;
    }
  }
  return true;
}

int main(){
  int n;
  cout<<"enter a number: ";
  int arr[n];
  for(int i = 1; i<=n; i++){
    cin>>arr[i];
  }

  is_sorted(n, arr);
  return 0;
}
