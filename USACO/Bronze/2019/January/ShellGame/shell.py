N = open("shell.in", 'r').readline().split()
N = int(''.join(N))

lines = [i.split() for i in open("shell.in", 'r').readlines()]
del lines[0]

possible = []

for i in range(3):
  points = 0
  game = [0, 0, 0]
  game[i] = 1
  for k in range(N):
    a, b, g = map(int, lines[k])
    temp = game[a-1]
    game[a-1] = game[b-1]
    game[b-1] = temp
    if (game[g-1] == 1):
      points += 1
  possible.append(points)

open("shell.out", 'w').write(str(max(possible)))