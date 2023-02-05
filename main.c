#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "dictionary.h"

#define maxN 10000

int main()
{ 
  time_t t = time(NULL);
  srand(t);
  for (int i = 0; i < 30; i++) {
    if (i ==29) {
			printf("%s}", word_list[rand() % maxN]);
		} else if (i == 0) {
			printf("{%s, ", word_list[rand() % maxN]);
		}
    else printf("%s, ", word_list[rand() % maxN]);
  }
  printf("\n");
  return 0;
}
