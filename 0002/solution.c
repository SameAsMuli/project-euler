#include <stdio.h>

int main()
{
  int fib[3] = {1,2,0};
  int i = 1;
  int total = 0;

  while ( fib[i%3] < 4000000 )
  {
    if ( i%3 == 1 )
      total += fib[1];

    fib[(i+1)%3] = fib[i%3] + fib[(i-1)%3];
    i++;
  }

  printf( "%d\n", total );
  return 0;
}
