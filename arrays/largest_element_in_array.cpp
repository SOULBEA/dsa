#include<bits/stdc++.h>
using namespace std;

int largest_element(int arr[], int n){
  int largest = arr[0];
  for(int i = 1; i<=n; i++){
    if(arr[i]>largest){
      largest = arr[i];
    }
  }
  return largest;
}

int main(){
  int n;
  cout<<"enter a number: ";
  cin>>n;
  int arr[n];
  for(int i = 1; i<=n; i++){
    cin>>arr[i];
  }
  largest_element(arr, n);
  return 0;
}
