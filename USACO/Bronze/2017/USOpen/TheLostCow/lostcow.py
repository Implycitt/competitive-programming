jpos, bpos = map(int, open("lostcow.in", 'r').read().split())

start = 1
factor = -2
dist = 0
currpos = jpos
found = False

while not found:
    nextpos = jpos + start
    start *= factor
    if (nextpos >= bpos and jpos < bpos) or (nextpos <= bpos and jpos > bpos) :
        dist += abs(abs(nextpos - currpos) - abs(nextpos-bpos))
        found = True
    else:
        dist += abs(nextpos - currpos)
    currpos = nextpos

open("lostcow.out", 'w').write(str(dist))