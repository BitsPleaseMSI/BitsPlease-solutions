'''Solution to Problem 29'''
'''This CODE has been tested in Python 2.7.x'''
test_c = int(raw_input())       # number of test cases
test_list = []                      
for i in range(0,test_c):       #Taking inputs
    temp = int(raw_input())
    test_list.append(temp)
for j in test_list:
    print pow(2,j)              

