M, N, K = map(int, open("cowsignal.in", 'r').readline().split())

image = [i.split() for i in open("cowsignal.in", 'r').readlines()]
del image[0]

outfile = open("cowsignal.out", 'w')

for num, row in enumerate(image):
  newrow = []
  for character in ''.join(row):
    newrow.append(character*K)
  newrow.append('\n')
  outfile.write(''.join(newrow)*K)