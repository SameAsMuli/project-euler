#include <stdio.h>

int main()
{
  int Sum = 0;
  long SumOfSquares = 0;

  for ( int i = 1; i <= 100; i++ )
  {
    Sum += i;
    SumOfSquares += i * i;
  }

  printf( "%d\n", Sum*Sum - SumOfSquares );
}
