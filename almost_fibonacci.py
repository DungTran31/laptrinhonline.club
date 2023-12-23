MOD = 1000000007

def fibo(n):
    if n == 1:
        a = 1
        b = 1
    else:
        x, y = fibo(n // 2)
        a = ((x % MOD) * (x % MOD) + (y % MOD) * (y % MOD)) % MOD  # a = x*x + y*y
        b = (2 * (x % MOD) * (y % MOD) - (y % MOD) * (y % MOD)) % MOD  # b = 2*x*y - y*y
        if n % 2:
            a = a + b  # a = a + b
            b = a - b  # b = a - b
    return a, b

n = int(input())

if n == 0:
    a = 1
else:
    a, b = fibo(n + 1)

print((a - 1 + MOD) % MOD)