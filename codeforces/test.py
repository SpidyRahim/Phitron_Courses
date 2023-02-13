def f(s):
    return len(set(s))


t = int(input().strip())
for _ in range(t):
    n = int(input().strip())
    s = input().strip()
    print(len(set(s)))
