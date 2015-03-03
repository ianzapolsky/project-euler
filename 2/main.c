#include <stdio.h>

int main() {
  unsigned long sum = 0;
  int prev = 1;
  int curr = 2;
  while (curr < 4000000) {
    if (curr % 2 == 0) {
      sum = sum + curr;
    }
    int temp = curr;
    curr = prev + curr;
    prev = temp;
  }
  printf("sum is %lu\n", sum);
  return 0;
}

