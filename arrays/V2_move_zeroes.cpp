#include<iostream>
using namespace std;

int *moveZero(int n, int arr[]){
  int j = -1;
  for(int i = 0; i<n; i++){
    if(arr[i]==0){
      j = i;
      break;
    }
  }
  if(j == -1) return arr;
  for(int i = j+1; i<n;i++){
    if(arr[i]!=0){
      swap(arr[i], arr[j]);
      j++;
    }
  }
  return arr;
}

int main(){
  int n = 9;
  int arr[n] = {1,0, 2, 3, 2, 0, 0, 4, 5, 1};
  moveZero(n, arr);
  for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}
