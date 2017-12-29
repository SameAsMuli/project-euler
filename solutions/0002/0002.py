fib = [1,2,0]
i = 1
total = 0

while fib[i%3] < 4000000:
    if i%3 == 1:
        total += fib[1]

    fib[(i+1)%3] = fib[i%3] + fib[(i-1)%3]
    i += 1

print(total)
