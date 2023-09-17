/**
 */
#include "limits.h"
int uadd_ok(unsigned x, unsigned y) {
  unsigned sum = x + y;
  return sum > x;
}

int tadd_ok(int x, int y) {
  int sum = x + y;
  int pos_over = x >= 0 && y >= 0 && sum < 0;
  int neg_over = x < 0 && y < 0 && sum >= 0;
  return !pos_over && !neg_over;
}

/**
 *
 */
int tsub_ok(int x, int y) {
  if (x < 0 && y == INT_MIN) {
    return 1;
  }
  return tadd_ok(x, -y);
}
