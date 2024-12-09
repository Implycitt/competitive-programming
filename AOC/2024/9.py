with open("../inputs/2024/9.txt", 'r') as file:
    data = file.readline()[:-1]

def part1():
    ans = 0
    disk = []
    index = 0
    for i in range(len(data)):
        
        if i % 2 == 0:
            disk.append([(str(index))]*int(data[i]))
            index += 1
        else:
            disk.append(['.']*int(data[i]))

    disk = [j for i in disk for j in i]

    pind, lind = 0, len(disk)-1
    while pind < lind:
        if disk[pind] == '.':
            if disk[lind] != '.':
                disk[pind] = disk[lind]
                disk[lind] = '.'
                pind += 1
            lind -= 1
        else:
            pind += 1
    
    for i in range(len(disk)):
        if disk[i] != '.':
            ans += i*int(disk[i])

    print(ans)
        

if __name__ == "__main__":
    part1()
