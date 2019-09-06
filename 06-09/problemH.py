import math

num = int(input())

for i in range(num):
    a, b = input().split(" ")
    c = math.gcd(int(a), int(b))
    print(c)