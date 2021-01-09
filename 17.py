from itertools import permutations

ar = list(map(int, str(input()).split())) # store digits in a list as integers

perms = list(permutations(ar + [ar[0]])) + list(permutations(ar + [ar[1]])) + list(permutations(ar + [ar[2]])) # generate all permutations of the pass code

for i in set(perms): # set to remove possible duplicates
    print (''.join(str(j) for j in i))