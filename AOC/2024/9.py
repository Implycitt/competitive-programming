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

def part2():
    ans = 0
    id, pos = 0, 0
    files, empty = dict(), list()

    for i, size in enumerate(data):
        if i % 2 == 0:
            if int(size) == 0: continue
            files[id] = (pos, int(size))
            id += 1
        else:
            if data[i] != 0:
                empty.append((pos, int(size)))
        pos += int(size)

    while id > 0:
        id -= 1
        pos, size = files[id]
        for n, (spos, esize) in enumerate(empty):
            if spos >= pos:
                empty = empty[:n]
                break
            if size <= esize:
                files[id] = (spos, size)
                if size == esize:
                    empty.pop(n)
                else:
                    empty[n] = (spos+size, esize-size)
                break

    for key in files.keys():
        s, size = files[key]
        for i in range(s, s+size):
            ans += int(key)*int(i)

    print(ans)

if __name__ == "__main__":
    part1()
    part2()
