#include <stdio.h>

int main()
{
  int i = 0;
  int total = 0;

  for ( ; i < 1000; i++ )
  {
    if ( i % 3 && i % 5 )
      continue;

    total += i;
  }

  printf( "%d\n", total );
  return 0;
}
