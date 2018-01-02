total=0
sum_of_sqrs=0

for i in range(1, 100):
    total += i
    sum_of_sqrs += i*i

print(total*total - sum_of_sqrs)
