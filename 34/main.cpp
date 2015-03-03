#include <iostream>
#include <string>
#include <vector>

int factorial(int num) {
  int sum = 1;
  while (num > 0)
    sum *= num--;
  return sum;
}

int main() {
  int result = 0;
  for (int i = 10; i < 2540161; i++) {
    int fact_sum = 0;
    int number = i;
    while (number > 0) {
      int d = number % 10;
      number /= 10;
      fact_sum += factorial(d);
    }
    if (fact_sum == i) {
      result += i;
    }
  }
  std::cout << result << "\n";
}

