with open("in.txt", 'r') as file:
    runes = file.readline().strip().split(':')[1:][0].split(',')
    text = [line.strip() for line in file]

def part1():
    sum = 0
    for i in runes:
        sum += text.count(i)
    print(sum)

def part2():
    sum = 0
    for sentence in text:
        indexes = set()
        for rune in runes:
            for i in range(len(sentence) - len(rune) + 1):
                if sentence[i:i+len(rune)] == rune:
                    for j in range(i, i + len(rune)):
                        indexes.add(j)
                if sentence[i:i+len(rune)] == rune[::-1]:
                    for j in range(i, i + len(rune)):
                        indexes.add(j)
        sum += len(indexes)
    print(sum)

if __name__ == "__main__":
    part2()

