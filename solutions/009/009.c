#include <math.h>
#include <stdio.h>

int main()
{
  int a, b;
  double c;
  
  for ( b = 1; b < 500; b++ )
    for ( a = 1; a < b; a++ )
    {
      c = sqrt( pow( a, 2 ) + pow( b, 2 ) );

      if ( c - floor( c ) || a + b + c != 1000 )
        continue;

      printf( "%ld\n", a * b * (int)c );
      return 0;
    }
}
