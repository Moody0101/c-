from random import choice
from string import ascii_lowercase, ascii_uppercase


def generateletters(n):
    return ''.join([choice(ascii_lowercase + ascii_uppercase) for i in range(n)])

def generateNames(n):
    return [generateletters(10) for i in range(n)]

def writecsv(file, name, data: list | str=None):
    if not data:
        with open(file, 'a') as f:
            f.write(f"{name}\n")
            for i in generateNames(1000):
                f.write(f"{i}\n")
                print(i)
            print("done!")


writecsv("names.csv", "names")