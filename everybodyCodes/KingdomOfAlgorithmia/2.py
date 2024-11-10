with open("in.txt", 'r') as file:
    runes = file.readline().strip().split(':')[1:][0].split(',')
    text = file.readlines()[1:][0].strip()

def part1():
    sum = 0
    for i in runes:
        sum += text.count(i)
    print(sum)
part1()
