#include <iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }
  
  int number;
  cout<<"please enter number: ";
  cin>>number;
  int count = 0;
  for(int i = 0; i<n; i++){
    if(arr[i]== number){
      count++;
    }
  }
  cout<<count<<endl;
  return 0;
}
