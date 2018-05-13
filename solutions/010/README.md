## Summation of Primes
#### Problem 10

The sum of the primes below _10_ is

_2 + 3 + 5 + 7 = 17_.

Find the sum of all the primes below two million.


#### Personal Notes
My first attempt was a simple brute force and took maybe _5_ or _10_ seconds to run.

This was my first solution so far to have a non-insignificant run time and, as such, I decided to try a new solution and optimise as much as I could.

I ended up using [Eratosthenes' Sieve](https://www.wikipedia.org/wiki/Sieve_of_Eratosthenes "Sieve of Eratosthenes") as the basis of my new solution.

To save on memory allocation I cut the size of the boolean array in half (as we can easily ignore all multiples of two) and used a bit array to save space again. Due to this, the index _i_ of the array is _(n-3)/2_, where _n_ is the number we're actually checking.
Note that we're using a bit array, the memory is allocated as an int array. This is because _C_ does not provide inbuilt support for bit arrays and the most cost efficient access to memory is via int-sized data.
I found [this](https://www.mathcs.emory.edu/~cheung/Courses/255/Syllabus/1-C-intro/bit-arraylhtl "Array of Bits") to be useful reading around bit arrays.

Further optimisations include the first loop not exceeding the root of the limit number (which in this case _2,000,000_). This is because multiples of any higher numbers are guaranteed to have already been covered by multiples of lower numbers. This also means we can start the inner loop from _n<sup>2</sup>_. Note again that _n_ is the number we're checking, the index for _n<sup>2</sup>_ is actually _2<sup>2</sup> + 6i + 3_ where _i_ is the index of _n_.
