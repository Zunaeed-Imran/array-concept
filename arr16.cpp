#include <iostream>
using namespace std;

int main(){
  int array[9] = {65, 99, 528, 12, 32, 9, 74, 514, 2};
  for (int i = 0; i < 3; i++){
    cout <<array[i]<<" ";
  }
  return 0;
}

// i = 0;

// {65, 99, 528, 12, 32, 9, 74, 514, 2};
// {65}

// for(i = 0){
// }
// ----------
// i=1;
// 65, 99;
// ------------
// i=2;
// 65, 99, 258;