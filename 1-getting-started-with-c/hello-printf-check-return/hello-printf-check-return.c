#include <stdio.h>
#include <stdlib.h>

int main(void) {
  if (printf("%s\n", "Hello, world!") == -1) {
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}
