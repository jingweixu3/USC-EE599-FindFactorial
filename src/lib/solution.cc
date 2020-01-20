#include "solution.h"
#include <iostream>
int Solution::FindFactorial(int n) {
  if(n < 0){
    return -1;
  }
  else if(n == 0){
    return 1;
  }
  else{
    int result = 1;
    while(n > 0){
      result = result * n;
      n--;
    }
    return result;
  }
}

int Solution::FindFactorialRecursive(int n) {
  if(n < 0){
    return -1;
  }
  else if (n == 0){
    return 1;
  }
  else {
    return n * FindFactorial(n-1);
  }
}
