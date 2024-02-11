for q in range(int(input())):
  n = int(input())
  a = input()
  b = input()
  c = input()
  print("YES" if any([a[i] != c[i] and b[i] != c[i] for i in range(n)]) else "NO")