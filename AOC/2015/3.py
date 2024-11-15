with open("../input.txt", 'r') as file:
    inp = list(file.read())

coords = []

xpos, ypos, index = 0, 0, 0
while (inp[index] != '\n'):
    coords.append((xpos, ypos))
    match (inp[index]):
        case '>': 
            xpos += 1
        case '<': 
            xpos -= 1
        case '^': 
            ypos += 1
        case 'v': 
            ypos -= 1
    index += 1 

print(len(set(coords)))
