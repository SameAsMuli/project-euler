#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int Limit = 2000000;
  int OuterLoopLimit = (sqrt(Limit) - 3)/ 2;
  int *List = calloc( (Limit - 2)/64, sizeof(int) );

  for ( int i = 0; i < OuterLoopLimit; i++ )
    if ( !(List[i/32] & (1 << (i%32))) )
      for ( int j = (2*(i*i)) + (6*i) + 3; j < (Limit/2) - 1; j += (2*i) + 3 )
        List[j/32] |= (1 << (j%32));

  long Sum = 2;
  for ( int i = 0; i < (Limit/2) - 1; i++ )
    if ( !(List[i/32] & (1 << (i%32))) )
      Sum += (2*i)+3;

  printf( "%ld\n", Sum );
}
