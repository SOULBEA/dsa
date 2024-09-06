#include<iostream>
using namespace std;

void sort_arr(int arr[], int n){
  for (int i = 0; i <= n - 1; i++) {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
      int temp = arr[j - 1];
      arr[j - 1] = arr[j];
      arr[j] = temp;
      j--;
    }
  }
}

int sec_largest(int arr[], int n){
  int largest = arr[n-1];
  int sec_large;
  for(int i = n-2; i>=0;i--){
    if(arr[i] != largest){
      sec_large = arr[i];
      break;
    }
  }
  return sec_large;
  cout<<"second largest number in the array is: "<<sec_large<<endl;
}

int main(){
  int arr[] = {1,2,4,7,7,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  sort_arr(arr, n);
  sec_largest(arr, n);
  return 0;
}
