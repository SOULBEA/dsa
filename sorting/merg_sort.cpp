#include <iostream>
using namespace std;

int main(){
  int n;
  cout<<"enter a number: "<<endl;
  cin>>n;
  int arr[n];
  cout<<"enter your numbers: "<<endl;
  for(int i = 1; i<=n; i++){
    cin>>arr[i];
  }

  merge_sort(arr, low, high);

  for(int i = 1; i<=n; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
