from random import randrange, choice
from itertools import combinations

EXTENSIONS = ['.doc', '.docx', '.xls', '.xlsx', '.log', '.db']

for ext in choice(list(combinations(EXTENSIONS, 3))):
    for i in range(randrange(3, 10)):
        name = ''.join([chr(randrange(0x61, 0x7a)) for _ in range(randrange(6, 10))])
        with open(name + ext, 'w+') as hfile:
            pass
