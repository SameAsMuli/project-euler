#include <stdio.h>

long gcd( long a, long b )
{
  int c;
  while ( b )
  {
    c = b;
    b = a % b;
    a = c;
  }

  return a;
}

int main()
{
  long lcm = 20;

  for ( int i = lcm - 1; i > 1; i-- )
    lcm = ( lcm * i ) / gcd( lcm, i );

  printf( "%d\n", lcm );
}
