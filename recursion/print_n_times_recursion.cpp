#include<iostream>
using namespace std;

int count = 0;

void f(){
  if(count == 10){
    return;
  }
  count++;
  printf("%d ", count);
  f();
}

int main(){
  f();
  return 0;
}
