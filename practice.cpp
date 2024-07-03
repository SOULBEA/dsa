#include<iostream>
using namespace std;

void print1(int n){
  for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
      cout<<'*';
    }
    cout<<endl;

  }
}

void print2(int n){
  int i = 1;
  while(i<=n){
    int j = 1;
    while(j<=i){
      cout<<'*';
      j++;
    }
    cout<<endl;
    i++;
  }
}

void print3(int n){
  for(int i = 1; i<=n; i++){
    for(int j = 1; j<=i; j++){
      cout<<j;
    }
    cout<<endl;
  }
}

void print4(int n){
  for(int i = 1; i<=n; i++){
    for(int j = 1; j<=i; j++){
      cout<<i;
    }
    cout<<endl;
  }
}

void print5(int n){
  for(int i = 1; i<=n;i++){
    for(int j = 1; j<=n-i+1; j++){
      cout<<'*';
    }
    cout<<endl;
  }
}

void print6(int n){
  int i = 1;
  while(i<=n){
    cout<<i<<endl;
    i++;
  }
}

int main(){
  int n;
  cout<<"please enter the range: ";
  cin>>n;
  //print2(n);
  //print3(n);
  //print4(n);
  //print5(n);
  print6(n);
  return 0;
}
