#include "hamming.h"

int compute(const char *lhs, const char *rhs)
{
    int i, distance = 0;
    for (i = 0; lhs[i] != '\0' && rhs[i] != '\0'; i++)
    {
      if (lhs[i] != rhs[i]) {
        distance += 1;
      }
    }
    if (lhs[i] != '\0' || rhs[i] != '\0') {
      return -1;
    }
    return distance;
}
