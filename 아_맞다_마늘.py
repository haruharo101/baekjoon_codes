N = int(input())
X = [x for x in input().split()]
Y = [y for y in input().split()]
for i in X:
    flag = False
    for j in Y:
        if(i == j):
            flag = True
    if(not flag):
        print(i)
        break
