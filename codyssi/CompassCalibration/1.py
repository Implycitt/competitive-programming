with open('1.txt', 'r') as file:
    text = file.read().splitlines()

def part1():
    initial = text[0]
    mag = text[1:-1]
    signs = text[-1]
    new = []

    for i in range(len(mag)):
        new.append(eval(f'{signs[i]}{mag[i]}'))

    s = sum([int(i) for i in new])
    print(int(initial) + s)

def part2():
    initial = text[0]
    mag = text[1:-1]
    signs = text[-1]
    signs = signs[::-1]
    new = []

    for i in range(len(mag)):
        new.append(eval(f'{signs[i]}{mag[i]}'))

    s = sum([int(i) for i in new])
    print(int(initial) + s)

def part3():
    newText = []
    for i in range(0, len(text)-1, 2):
       newText.append(int(text[i] + text[i+1])) 

    mag = newText[1:]
    signs = text[-1]
    signs = signs[::-1]
    initial = newText[0]
    new = []

    for i in range(len(mag)):
        new.append(eval(f'{signs[i]}{mag[i]}'))
    
    s = sum([int(i) for i in new])
    print(int(initial) + s)

part1()
part2()
part3()
