#include <iostream>
using namespace std;

int count = 0;

void print(){
  if(count == 5){
    return;
  }
  cout<<count<<" ";
  count++;
  print();
}

int main (int argc, char *argv[]) {
  print();
  return 0;
}
