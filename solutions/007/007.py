primes=[i for i in range(1,10002)]
primes[0] = 2
primes[1] = 3
check = 5
position = 1

for prime_index in range(2, 10001):
    while primes[position-1]*primes[position] <= check:
        if not check % primes[position]:
            position = 1
            check += 2
        else:
            position += 1
    position = 1
    primes[prime_index] = check
    check += 2

print(primes[10000])
