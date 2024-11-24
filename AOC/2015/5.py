with open("../input.txt", 'r') as file:
    text = file.read().splitlines()

def part1():
    vowels = list('aeiou')
    alphabet = list('abcdefghigklmnopqrstuvwxyz')
    badstrings = ['ab', 'cd', 'pq', 'xy']
    sum = 0
    for i in text:
        vsum = 0
        first, b, c = False, False, True 
        for v in vowels:
            vsum += i.count(v)
        if (vsum >= 3):
            first = True
        for a in alphabet:
            for k in range(len(i)-1):
                f, s = i[k], i[k+1]
                if str(f+s) == f*2:
                    b = True
                if str(f+s) in badstrings:
                    c = False


        if first and b and c:
            sum += 1
        
    print(sum)

if __name__ == "__main__":
    part1()
