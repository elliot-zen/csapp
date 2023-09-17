#include "arithmetic_operation.h"
#include "show_bytes.h"
#include <limits.h>
#include <stdio.h>

int main() {
  printf("%d \n", INT_MIN);
  printf("%d \n", tsub_ok(-1, INT_MIN));
  printf("%d \n", tadd_ok(-1, INT_MIN));
  printf("%d \n", (-1 - INT_MIN) == INT_MAX);
  return 0;
}
