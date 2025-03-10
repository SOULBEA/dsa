#include <iostream>
using namespace std;

void remove_duplicates(int n, int arr[]){
  for(int i = 0; i<n; i++){
    for(int j = i+1; j<n; j++){
      if(arr[i] == arr[j]){
        for(int k = j; k<n; k++){
          arr[k] = arr[k+1];
        }
        n--;
        j--;
      }
    }
  }
}

int main(){
  int n;
  cout<<"enter number: ";
  cin>>n;
  int arr[n];
  for(int i =1; i<=n; i++){
    cin>>arr[i];
  }
  remove_duplicates(n, arr);
  for(int i = 1; i<=n; i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}
