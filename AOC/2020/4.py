import re

with open("../inputs/2020/4.txt", 'r') as file:
    text = file.read().split('\n\n')

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
    fields = {
            "byr": r"byr:\s*(19[2-9]\d|200[0-2])\b", 
            "iyr": r"iyr:\s*20(1\d|20)\b",
            "eyr": r"eyr:\s*20(2\d|30)\b",
            "hgt": r"hgt:\s*(1([5-8]\d|9[0-3])cm|(59|6\d|7[0-6])in)",
            "hcl": r"hcl:\s*#[0-9a-f]{6}\b",
            "ecl": r"ecl:\s*(amb|blu|brn|gry|grn|hzl|oth)\b",
            "pid": r"pid:\s*\d{9}\b"
    }

    print(sum([all([re.search(fields[k], p) for k in fields]) for p in text]))
            
if __name__ == "__main__":
   part1()
   part2() 
