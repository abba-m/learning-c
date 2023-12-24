
#include "diamond.h"
#include <stdio.h>

void diamond () {
  int i, j, k;

  // first half
  for (i = 10; i >= 1; i--) {
    for (j = 0; j < i; j++) {
      printf("*");
    }
    for (k = 20 - (i * 2); k > 0; k--) {
      printf(" ");
    }
    for (j = 10 - i; j < 10; j++) {
      printf("*");
    }
    printf("\n");
  }

  // second half
  for (i = 1; i <= 10; i++) {
    for (j = 0; j < i; j++) {
      printf("*");
    }
    for (k = 20 - (i * 2); k > 0; k--) {
      printf(" ");
    }
    for (j = 10 - i; j < 10; j++) {
      printf("*");
    }
    printf("\n");
  }

}
