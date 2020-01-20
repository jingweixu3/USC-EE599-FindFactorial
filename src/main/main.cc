#include "src/lib/solution.h"
#include <iostream>

int main() {
  Solution solution;
  int n = 11;
  std::cout << "inputs: n = 11, output: " << solution.FindFactorial(n) << std::endl;
  std::cout << "inputs: n = 11, recursive recursive output: " << solution.FindFactorialRecursive(n) << std::endl;

  n = 1;
  std::cout << "inputs: n = 1, output: " << solution.FindFactorial(n) << std::endl;
  std::cout << "inputs: n = 1, output: " << solution.FindFactorialRecursive(n) << std::endl;

  n = -5;
  std::cout << "inputs: n = -5, output: " << solution.FindFactorial(n) << std::endl;
  std::cout << "inputs: n = -5, output: " << solution.FindFactorialRecursive(n) << std::endl;

  return 0;
}