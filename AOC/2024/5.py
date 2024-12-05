with open("../inputs/2024/5.txt", 'r') as file:
    rules, data = file.read().split('\n\n')
    data = [[int(j) for j in i.split(',')] for i in data.splitlines()]
    rules = [''.join(i) for i in rules.split('\n')]

def part1():
    ans = 0

    ruleset = {}
    for i in rules:
        first, second = map(int, i.split('|'))
        if first in ruleset.keys():
            ruleset[first].append(second)
        else:
            ruleset[first] = [second]

    for i in data:
        mid = (int((len(i)-1)/2))
        if (check(i, ruleset)):
            ans += i[mid]

    print(ans)

def check(update, ruleset):
    for count, num in enumerate(update):
        if num not in ruleset.keys(): continue
        for j in ruleset[num]:
            if j not in update: continue
            if count > update.index(j): return False  

    return True 

def part2():
    ans = 0

    ruleset = {}
    for i in rules:
        first, second = map(int, i.split('|'))
        if first in ruleset.keys():
            ruleset[first].append(second)
        else:
            ruleset[first] = [second]

    inc = []
    for i in data:
        mid = (int((len(i)-1)/2))
        if not (check(i, ruleset)):
            inc.append(i)

    for i in inc:
        mid = (int((len(i)-1)/2))
        perm = reorder(i, ruleset) 
        while not (check(perm, ruleset)):
            perm = reorder(perm, ruleset)
        ans += perm[mid] 

    print(ans)

def reorder(update, ruleset):
    copy = [i for i in update]
    for count, num in enumerate(update):
        if num not in ruleset.keys(): continue
        for j in ruleset[num]:
            if j not in update: continue
            if count > update.index(j): 
                copy[update.index(j)] = num
                copy[count] = j
                return copy


if __name__ == "__main__":
    part1()
    part2()
