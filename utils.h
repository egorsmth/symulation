#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

void initRandom() {
  srand(time(NULL));
}

int random() {
  return rand() % 10l;
}