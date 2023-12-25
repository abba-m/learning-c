
#include "diamond.h"
#include <stdio.h>
#include <time.h>
#include <unistd.h>

void diamond () {
  int i, j, k;

  // first half
  for (i = 10; i >= 1; i--) {
    for (j = 0; j < i; j++) {
      printf("*");
      SMALLPAUSE;
    }
    for (k = 20 - (i * 2); k > 0; k--) {
      printf(" ");
    }
    for (j = 10 - i; j < 10; j++) {
      printf("*");
      SMALLPAUSE;      
    }
    printf("\n");
  }

  // second half
  for (i = 1; i <= 10; i++) {
    for (j = 0; j < i; j++) {
      printf("*");
      SMALLPAUSE;
    }
    for (k = 20 - (i * 2); k > 0; k--) {
      printf(" ");
    }
    for (j = 10 - i; j < 10; j++) {
      printf("*");
      SMALLPAUSE;
    }
    printf("\n");
  }

}

void welcome_scrn (char name[]) {
  printf("Welcome to Diamond Schools!\n\n");
  // print diamond
  diamond();
  sleep(2);

  // clear screen
  clear();
  
  printf("What is your name? ");
  scanf("%20s", name);
  sleep(2);
  clear();
}
