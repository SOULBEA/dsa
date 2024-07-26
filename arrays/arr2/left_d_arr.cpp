#include <iostream>   
using namespace std;

void shift(int arr[], int n, int d){
  d = d%n;
  int temp = [d];
  for(int i = 0; i<n; i++){
    temp[i] = arr[i];
  }

  for(int i = 0; i<n; i++){
    arr[i-d] = arr[i];
  }
  
  for(int i = 0; i<n; i++){
    arr[i] = temp[i-(n-d)];
  }

}

int main(){
  int n = 5;
  int arr[] = {1,2,3,4,5,6,7};
  return 0;
}
