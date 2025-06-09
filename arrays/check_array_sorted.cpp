#include <iostream>
using namespace std;

int isSoreted(int arr[], int n){
  for(int i = 0; i<n; i++){
    if(arr[i]>=arr[i-1]){

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
  cin>>n;
  int arr[n];
  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }
  cout<<isSoreted(arr, n)<<endl;
  return 0;
}
