#include <iostream>
using namespace std;

int optimal(int arr[], int n){
  int largest = arr[0];
  for(int i = 0; i<n; i++){
    if(arr[i]>largest){
      largest = arr[i];
    }
  }
  cout<<"the largest value is : "<<largest<<endl;
  return largest;
}

int main(){
  int arr[] = {3, 2, 1, 5, 2};
  int n = sizeof(arr)/sizeof(arr[0]);
  optimal(arr, n);
  return 0;
}
