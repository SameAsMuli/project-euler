total = 0

for i in range(0,1000):
    if i%3 and i%5:
        continue
    total += i

print(total)
