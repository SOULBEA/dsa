#include <iostream>
using namespace std;

int check(int arr[], int n){
  for(int i = 1; i<n; i++){
    if(arr[i]>=arr[i-1]){

    }
    else{
      cout<<"not sorted"<<endl;
    }
  }
  cout<<"sorted"<<endl;
  return true;
}


int main(){
  int arr[] = {1,2,3,4,5,6};
  int n = sizeof(arr)/sizeof(arr[0]);
  check(arr, n);
  return 0;
}
