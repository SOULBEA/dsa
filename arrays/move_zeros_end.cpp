#include<iostream>
using namespace std;

int *moveZeros(int n, int arr[]){
  int temp[n];
  int j = 0;
  for(int i = 0; i<n; i++){
    if(arr[i]!=0){
      temp[j] = arr[i];
      j++;
    }
  }
  int nz = sizeof(temp)/sizeof(temp[0]);
  for(int i = 0; i<j; i++){
    arr[i] = temp[i];
  }
  for(int i = j; i<n; i++){
    arr[i] = 0;
  }
  return arr;
}

int main(){
  int n = 9;
  int arr[n] = {1,0, 2, 3, 2, 0, 0, 4, 5, 1};
  moveZeros(n, arr);
  for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
