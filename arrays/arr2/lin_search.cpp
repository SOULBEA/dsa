#include<iostream>
using namespace std;

void lin_search(int arr[], int n){
  for(int i =1; i<n; i++){
    if(arr[i] == n){
      cout<<i;
    }
  }
  return;
}

int main(){
  int n;
  cin>>n;
  int arr[] = {1,2,3,4,5,6};
  lin_search(arr, n);

  return 0;
}
