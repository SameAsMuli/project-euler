#include <stdio.h>

int main()
{
  int Primes[10001];
  Primes[0] = 2;
  Primes[1] = 3;
  int Position;
  int Check = 5;

  for ( int PrimesIndex = 2; PrimesIndex < 10001; PrimesIndex++ )
  {
    for ( Position = 1; Primes[Position]*Primes[Position] <= Check; Position++ )
      if ( !(Check % Primes[Position]) )
      {
        Position = 0;
        Check += 2;
      }
    Primes[PrimesIndex] = Check;
    Check += 2;
  }

  printf( "%d\n", Primes[10000] );
}
