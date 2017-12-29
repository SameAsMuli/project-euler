#include <stdio.h>

int main()
{
  long Num = 600851475143;

  for ( int i = 2; i*i <= Num; i++ )
  {
    if ( Num % i )
      continue;
    
    while ( Num % i == 0 )
      Num /= i;
  }

  printf( "%ld\n", Num );
}
