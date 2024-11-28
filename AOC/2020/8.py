import copy

with open("../inputs/2020/8.txt", 'r') as file:
    text = file.read().splitlines()

def part1():
    acc, index = 0, 0
    copy = [0]*len(text)
    flag = False
    while not flag:
        instruction, mag = text[index].split(' ') 
        copy[index] += 1
        if copy[index] > 1:
            flag = True
            continue
        if instruction == "nop":
           index += 1
        elif instruction == "acc":
            acc += int(mag)
            index += 1
        else:
           index += int(mag) 

    print(acc)

def part2():
    index = 0
    for _ in text:
        t = copy.copy(text)
        op, mag = t[index].split(' ')
        if op == 'nop':
            t[index] = f'jmp {mag}'
        elif op == 'jmp':
            t[index] = f'nop {mag}'
        out = loop(t)
        if type(out) is int:
            print(out)
            return
        index += 1
            

def loop(t):
    acc, index = 0, 0
    copy = [0]*len(t)
    while index != len(t)-1:
        instruction, mag = t[index].split(' ') 
        copy[index] += 1
        if copy[index] > 1:
            return 
        if instruction == "nop":
           index += 1
        elif instruction == "acc":
            acc += int(mag)
            index += 1
        else:
           index += int(mag) 
    return acc


if __name__ == "__main__":
    part1()
    part2()
