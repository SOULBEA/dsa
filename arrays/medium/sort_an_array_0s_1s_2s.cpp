#include <iostream>
using namespace std;

int count_0, count_1, count_2;

void sort(int a[], int n){
  for(int i = 0; i<n; i++){
    if(a[i] == 0) count_0++;
    else if(a[i] == 1) count_1++ ;
    else count_2++;
  }
  for(int i = 0; i<count_0; i++) a[i] = 0;
  for(int i = count_0; i<count_0+count_1; i++) a[i] = 1;
  for(int i = count_0+count_1; i<n; i++) a[i] = 2;
}

int main(){
  int n;
  cout<<"enter a number: ";
  cin>>n;
  int a[n];
  for(int i = 0; i<n; i++){
    cin>>a[i];
  }
  sort(a, n);
  
  for(int i = 0; i<n; i++){
    cout<<a[i]<<" ";
  }
  return 0;
}
