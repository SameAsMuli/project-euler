def gcd(a, b):
    while b:
        c = b
        b = a % b
        a = c
    return a

lcm = 20
for i in range(lcm-1, 1, -1):
    lcm = (lcm*i)//gcd(lcm, i)

print(lcm)
