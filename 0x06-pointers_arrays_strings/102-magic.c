#include <stdio.h>

int main(void)
{
  int n;
  int b[5];
  int *p;

  b[1] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
*(p + 5) = 9;
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", b[1]);
  return (0);
}
