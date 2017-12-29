def is_palindrome(num):
    orig = num
    rev = num%10
    num //= 10

    while num:
        rev = rev*10 + num%10
        num //= 10

    return orig == rev

largest = 0

for a in range(999, 99, -1):
    for b in range (999, a, -1):
        prod = a*b
        
        if prod < largest:
            break;

        if is_palindrome(prod):
            largest = prod

print(largest)
