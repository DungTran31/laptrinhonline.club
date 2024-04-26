import math

se = set()
for i in range(int(input())):
    x, y = map(int, input().split())
    ucln = math.gcd(x, y)
    x //= ucln
    y //= ucln
    se.add((x, y))
print(len(se))