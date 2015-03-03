/*
 * Naive solution. Note the use of 'unsigned long' because some Collatz sequences
 * produce numbers with numbers that are greater than the maximum value that can
 * be stored in a 32 bit integer, or 2147483647.
 */

#include <stdio.h>

unsigned long iterate(unsigned long n) {
  if (n % 2 == 0) {
    return n / 2;
  } else {
    return 3 * n + 1;
  }
}

unsigned long calc_length(unsigned long start) {
  unsigned long current = start;
  unsigned long length = 1;
  while (current != 1) {
    current = iterate(current);
    length++;
  }
  return length;
}

int main() {
  unsigned long max_start = 0;
  unsigned long max_length = 0;
  for (unsigned long i = 0; i < 1000000; i++) {
    unsigned long length;
    if ((length = calc_length(i)) > max_length) {
      max_length = length;
      max_start = i;
    }
    printf("starting at %lu generates chain of length %lu\n", i, length);
  }
  printf("max start is %lu\n", max_start);
  printf("max length is %lu\n", max_length);
  return 0;
}

