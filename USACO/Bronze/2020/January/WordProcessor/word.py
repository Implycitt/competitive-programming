data = open("word.in", 'r').read().split()
N, K = map(int, data[:2])
words = list(data[2:])

out = ""
size = 0

for word in words:
  if len(word) + size < K:
    out = out[:-1] + '\n'
    size = 0
  out += word + " "
  size += len(word)
out = out[:-1]

outfile = open("word.out", 'w')
for i in out:
  outfile.write(i)