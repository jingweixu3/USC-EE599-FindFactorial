#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>
Solution solution;

TEST(FindFactorial, Handles_Negative_Integer) {
  int inputs = -10;
  EXPECT_EQ(solution.FindFactorial(inputs), -1);
  EXPECT_EQ(solution.FindFactorialRecursive(inputs), -1);
}

TEST(FindFactorial, Handles_Zero) {
  int inputs = 0;
  EXPECT_EQ(solution.FindFactorial(inputs), 1);
  EXPECT_EQ(solution.FindFactorialRecursive(inputs), 1);
}

TEST(FindFactorial, Handles_Positive_Integer) {
  int inputs = 11;
  int expectoutput = 39916800;
  EXPECT_EQ(solution.FindFactorial(inputs), expectoutput);
  EXPECT_EQ(solution.FindFactorialRecursive(inputs), expectoutput);

  inputs = 8;
  expectoutput = 40320; 
  EXPECT_EQ(solution.FindFactorial(inputs), expectoutput);
  EXPECT_EQ(solution.FindFactorialRecursive(inputs), expectoutput);

  inputs = 1;
  expectoutput = 1; 
  EXPECT_EQ(solution.FindFactorial(inputs), expectoutput);
  EXPECT_EQ(solution.FindFactorialRecursive(inputs), expectoutput);

}
