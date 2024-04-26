def sol(n, i):
    if n == 1:
        print("A", end="")
    elif n == 2:
        print("B", end="")
    elif i <= F[n - 2]:
        sol(n - 2, i)
    else:
        sol(n - 1, i - F[n - 2])

F = [0, 1, 1]
for i in range(3, 93):
    F.append(F[i - 1] + F[i - 2])

mod = 10**9 + 7

t = int(input())
for _ in range(t):
    n, i = map(int, input().split())
    sol(n, i)
    print()
