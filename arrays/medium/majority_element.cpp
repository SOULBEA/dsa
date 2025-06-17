#include<iostream>
using namespace std;

int majority_element(int arr[], int n){
  for(int i = 0; i<n ;i++){
    int count = 0;
    for(int j = 0; j<n; j++){
      if(arr[j] == arr[i]){
        count++;
      }
    }
    if(count>n/2) return arr[i];
  }
  return -1;
}

int main(){
  int n;
  cout<<"enter a number: ";
  cin>>n;
  int arr[n];
  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }
  cout<<majority_element(arr, n);
  for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
