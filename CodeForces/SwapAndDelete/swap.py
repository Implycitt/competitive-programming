for i in range(int(input())):
  s = input()
  count = [0, 0]
  for k in range(len(s)):
    count[int(s[k])] += 1
  for k in range(len(s) + 1):
    if (k == len(s) or count[1 - int(s[k])] == 0):
      print(len(s) - k)
      break
    count[1 - int(s[k])] -= 1