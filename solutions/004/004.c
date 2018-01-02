#include <stdio.h>

static int IsPalindrome( int Num )
{
  int Orig = Num;
  int Reverse = Num%10;
  Num /= 10;

  while ( Num )
  {
    Reverse = Reverse*10 + Num%10;
    Num /= 10;
  }

  return Orig == Reverse;
}

int main()
{
  int LargestPalindrome = 0;
  int Product;
  
  for ( int a = 999; a >= 100; a-- )
  {
    for ( int b = 999; b >= a; b-- )
    {
      Product = a*b;

      if ( Product <= LargestPalindrome )
        break;

      if ( IsPalindrome( Product ) )
        LargestPalindrome = Product;
    }
  }
   
  printf( "%d\n", LargestPalindrome );
}
