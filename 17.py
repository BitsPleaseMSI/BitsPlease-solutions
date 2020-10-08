from itertools import permutations

ar = list(map(int, str(input()).split()))

perms = set(list(permutations(ar + [ar[0]])) + list(permutations(ar + [ar[1]])) + list(permutations(ar + [ar[2]])))

for i in perms:
    print (''.join(str(j) for j in i))