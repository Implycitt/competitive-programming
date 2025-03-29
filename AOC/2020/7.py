from collections import defaultdict

with open("../inputs/2020/7.txt", 'r') as file:
    text = file.read().splitlines()

bags = defaultdict(dict) 
def part1():
    for rule in text:
        parts = rule.split(' ')
        color = ' '.join(parts[:2])
        rest = ' '.join(parts[4:]).split(',')
        for p in rest:
            if 'no other bags' in p:
                bags[color] = {}
            else:
                part = p.strip().split(' ')
                bags[color][' '.join(part[1:3])] = int(part[0])
        

    print(sum([holds("shiny gold", bag) for bag in bags]))

def holds(inc, outc):
    if inc in str(bags[outc]):
        return True
    return any([holds(inc, b) for b in bags[outc]])

def inside(color):
    return sum([bags[color][b] * (1 + inside(b)) for b in bags[color]])

def part2():
    print(inside('shiny gold'))

if __name__ == "__main__":
    part1()
    part2()

