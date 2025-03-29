from collections import defaultdict
N = int(input())
moo_inp = list(map(int, input().split()))
moos = defaultdict(int)
for i in moo_inp:
    moos[i] += 1
    
singles, doubles = list(), list()

for i in moos.keys():
    if moos[i] > 1: doubles.append(i)
    else: singles.append(i)

print((len(singles)*len(doubles) + len(doubles) * (len(doubles)-1)))

