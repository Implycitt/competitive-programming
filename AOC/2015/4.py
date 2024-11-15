import hashlib

with open("../input.txt", 'r') as file:
    code = file.read().strip()

def part1(n):
   i = 1 
   while (True):
       text = str.encode(code + str(i))
       a = hashlib.md5(text).hexdigest()
       if (a[0:n] == '0'*n):
           print(i)
           break
       i += 1

if __name__ == "__main__":
    part1(5)
    part1(6)
