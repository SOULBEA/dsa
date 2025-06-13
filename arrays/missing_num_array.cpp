#include <iostream>
using namespace std;

int getSingleElement(int arr[], int n){
  for(int i = 0; i<n; i++){
    int num = arr[i];
    int count = 0;
    for(int j = 0; j<n; j++){
      count++;
    }
    if(count==1) return num;
  }
  return -1;
}

int main(){
  int arr[] = {4, 1, 2, 1, 2};
  int n = sizeof(arr)/sizeof(arr[0]);
  int ans = getSingleElement(arr, n);
  cout<<ans<<endl;
  return 0;
}
