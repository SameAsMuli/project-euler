from math import sqrt, floor

for b in range(1, 500):
    for a in range(1, b):
        c = sqrt(pow(a, 2) + pow(b, 2))
        if c - floor(c) or a + b + c != 1000:
            continue
        print(a*b*c)
