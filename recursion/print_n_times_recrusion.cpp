#include<iostream>
using namespace std;

int count = 0;
void f(){
  if(count ==2) return;
  printf("%d", count);
  count++;
  f();
}


int main(){
  f();
  return 0;
}
