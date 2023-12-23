# from collections import deque

# n, k, m = map(int, input().split())
# a = list(map(int, input().split()))
# Q = deque()
# res = 0

# for i in range(1, n + k):
#     if i <= n:
#         Q.append((a[i - 1], i))
#     tmp = m
#     while Q and tmp > 0:
#         value, pos = Q[0]
#         if i - pos < k:
#             tmp1 = min(value, tmp)
#             res += tmp1
#             tmp -= tmp1
#             if value <= tmp1:
#                 Q.popleft()
#             else:
#                 Q[0] = (value - tmp1, pos)
#         else:
#             Q.popleft()

# print(res)

from collections import deque

n, m, k = map(int, input().split())
a = list(map(int, input().split()))

res = 0
q = deque()

for i in range(n + m - 1):
    d = k
    if i < n:
        x = a[i]
        q.append(x)
    else:
        q.append(0)
    while len(q) > m:
        q.popleft()
    while q and d:
        if q[0] <= d:
            res += q[0]
            d -= q[0]
            q.popleft()
        else:
            res += d
            q[0] -= d
            d = 0

print(res)
