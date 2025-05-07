#include<iostream>
using namespace std;

void pattern1(int n){
  for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
      cout<<"*";
    }
    cout<<endl;
  }
}

void pattern2(int n){
  for(int i = 0; i<n; i++){
    for(int j = 0; j<i; j++){
      cout<<"*";
    }
    cout<<endl;
  }
}

void pattern3(int n){
  for(int i = 0; i<n; i++){
    for(int j = 0; j<i; j++){
      cout<<j;
    }
    cout<<endl;
  }
}

void pattern4(int n){
  for(int i = 1; i<=n; i++){
    for(int j = 1; j<=i; j++){
      cout<<i<<" ";
    }
    cout<<endl;
  }
}

void pattern5(int n){
  for(int i = 0; i<n; i++){
    for(int j = i; j<n; j++){
      cout<<"* ";
    }
    cout<<endl;
  }
}

void pattern6(int n){
  for(int i = 0; i<n; i++){
    for(int j = n; j>i; j--){
      cout<<n-j+1<<" ";
    }
    cout<<endl;
  }
}

void pattern7(int n){
  for(int i = 0; i<n; i++){
    for(int j = 0; j<n-i+1; j++){
      cout<<" ";
    }
    for(int k = 0; k<2*i+1; k++){
      cout<<"*"; 
    }
    for(int f = 0; f>n-i+1; f++){
      cout<<" ";
    }
    cout<<endl;
  }
}

void pattern8(int n){
  for(int i = 0; i<n; i++){
    for(int j = 0; j<i; j++){
      cout<<" ";
    }
    for(int j = 0; j<2*n - (2*i+1); j++){
      cout<<"*";
    }
    for(int j = 0; j<i; j++){
      cout<<" ";
    }
    cout<<endl;
  }
}

void pattern9(int n){
  for(int i = 0; i<n; i++){
    for(int j = 0; j<n-i+1; j++){
      cout<<" ";
    }
    for(int j = 0; j<2*i+1; j++){
      cout<<"*";
    }
    for(int j = 0; j<n-i+1; j++){
      cout<<" ";
    }
    for(int j = 0; j<i;j++){
      cout<<" ";
    }
    for(int j = 0; j<2*n - (2*i+1); j++){
      cout<<"*";
    }
    for(int j = 0; j<i; j++){
      cout<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
}

void pattern10(int n){
  for(int i = 1; i<=2*n-1; i++){
    int stars = i;
    if(i > n) stars = 2*n - 1;
    for(int j = 1; j<=stars;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}

void pattern11(int n){

}

int main(){
  int n;
  cout<<"enter number: ";
  cin>>n;
  pattern11(n);
  return 0;
}
