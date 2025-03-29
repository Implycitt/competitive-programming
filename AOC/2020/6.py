with open("../inputs/2020/6.txt") as file:
    text = file.read().split('\n\n')
    text = [i.split('\n') for i in text]
    text = [list(filter(None, i)) for i in text]

def part1():
    s = []
    for group in text:
        answers = set()
        for person in group:
            for answer in person:
                answers.add(answer)
        s.append(len(answers))
    print(sum(s))

def part2():
    s = 0 
    for group in text:
        ans = []
        answers = set()
        i = 0
        for person in group:
            i += 1
            for answer in person:
                ans.append(answer)
                answers.add(answer)
        for k in answers:
            if ans.count(k) == i:
                s += 1

    print(s)
    
if __name__ == "__main__":
    part1()
    part2()
