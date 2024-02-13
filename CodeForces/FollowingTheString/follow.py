for _ in range(int(input())):
  n = int(input())
  a = [int(x) for x in input().split()]
  count = [0] * 26
  string = ""
  for i in range(n):
    for j in range(26):
      if (count[j] == a[i]):
        count[j] += 1
        string += chr(97+j)
        break
  print(string)