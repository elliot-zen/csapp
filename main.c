#include "arithmetic_operation.h"
#include "show_bytes.h"
#include <limits.h>
#include <stdio.h>

int main() {
  printf("uint_max + uintmax Result : %d\n", uadd_ok(UINT_MAX, UINT_MAX));
  printf("1 + 1 Result : %d\n", uadd_ok(1, 1));
  return 0;
}
