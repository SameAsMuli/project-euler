num=600851475143
i=2

while i*i <= num:
    if num % i:
        i += 1
        continue
    
    while num%i == 0:
        num //= i

    i += 1

print(num)
