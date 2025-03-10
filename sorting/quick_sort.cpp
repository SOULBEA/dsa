#include<iostream>
using namespace std;

void quick_sort(){

}

int main(){
  int n;
  cout<<"enter a number: "<<endl;
  cin>>n;
  cout<<"enter your numbers: "
  int arr[n];
  for(int i = 1; i<=n; i++){
    cin>>arr[i];
  }
  quick_sort(arr, n);
  for(int i = 1; i<=n; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
