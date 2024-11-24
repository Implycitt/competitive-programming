with open("../in.txt", 'r') as file:
    text = file.read().split('\n\n')
    text = [i.replace('\n', ' ') for i in text]

def part1():
    sum = 0
    fields = ['byr', 'iyr', 'eyr', 'hgt', 'hcl', 'ecl', 'pid']
    for i in text:
        valid = True
        for j in fields:
            if j not in i:
                valid = False
        if valid:
            sum += 1
    print(sum)

def part2():
    sum = 0
    fields = {'byr': (1920, 2002), 'iyr': (2010, 2020), 'eyr': (2020, 2030), 'hgt': int, 'hcl': str, 'ecl': ('amb', 'blu', 'brn', 'gry', 'grn', 'hzl', 'oth'), 'pid': int}
    for entry in text:
        pp = {}
        entries = entry.split(' ')
        for i in entries:
            key, value = i.split(':')
            pp[key] = value
        valid = True

        for i in fields:


        if valid:
            sum += 1

if __name__ == "__main__":
   part2() 
