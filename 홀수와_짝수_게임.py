T = int(input())
for t in range(T):
    n = int(input())
    X = [int(x) for x in input().split()]
    odd = 0
    even = 0
    for x in X:
        if(x%2==1):
            odd+=1
        else:
            even+=1
    if((odd%2==1 and odd > even) or (even%2==1 and even > odd)):
        print('amsminn')
    else:
        print('heeda0528')