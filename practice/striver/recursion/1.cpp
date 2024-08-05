#include<iostream>
using namespace std;
int count = 0;
void print(){
  if(count == 3){
    return;
  }
  cout<<count<<" "<<endl;
  count++;
  print();
}

int main(){
  int n;
  cout<<"please enter range: ";
  cin>>n;
  print2(n);
  return 0;
}
