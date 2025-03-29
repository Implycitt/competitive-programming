with open("1.txt", 'r') as file:
    text = file.read().splitlines()

a, b, c = ''.join(text[0].split(':')[1:]).split(' ')[1:], ''.join(text[1].split(':')[1:]).split(' ')[1:], ''.join(text[2].split(':')[1:]).split(' ')[1:] 
instructions = {'add': '+', 'subtract': '-', 'divide': '/', 'multiply': '*', 'raise': '**'}
functions = [c, b, a]
prices = text[4:]
prices.sort()

def convert(num):
    sum = num 
    for i in functions:
        sum = eval(f'{sum}{instructions[i[0].lower()]}{i[-1]}')
    return sum

def part1():
    print(convert(prices[int((len(prices)-1)/2)]))

def part2():
    s = sum([int(i) for i in prices if int(i) % 2 == 0])
    print(convert(s))

def part3():
    limit = 15000000000000 
    check = 0
    highest = int(convert(prices[0]))
    index = 1
    while check <= limit:
        check = int(convert(prices[index]))
        if check > highest and check < limit:
            highest = check
            index += 1
        
    print(prices[index-1])


part1()
part2()
part3()
