with open("in.txt", 'r') as file:
    text = file.readline()

monsters = {"A": 0, "B": 1, "C": 3, "D": 5, "x": 0}

def part1():
    sum = text.count("B") + 3*text.count("C") 
    return sum
    
def part2():
    sum = 0
    for i in range(0, len(text)-2, 2):
        a, b = text[i], text[i+1]
        if a == 'x' or b == 'x':
            sum += (monsters[a] + monsters[b])
        else:
            sum += ((monsters[a]+1) + (monsters[b]+1))
    print(sum)
part2()
