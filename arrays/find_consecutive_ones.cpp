#include <iostream>
using namespace std;

int findMaxConsecutiveOnes(int arr[], int n){
  int max1 = 0;
  int count = 0;
  for(int i = 0; i<n; i++){
    if(arr[i] == 1){
      count++;
      max1 = max(max1, count);
    }
  }
  return max1;
}

int main(){
  int arr[] = {1,1,0,1,1,1,0,1,1};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<findMaxConsecutiveOnes(arr, n)<<endl;
  return 0;
}
