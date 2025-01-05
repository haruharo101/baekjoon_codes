N, M = map(int, input().split())
X = [int(x) for x in input().split()]
_m = -1
cnt = 0
for i in range(0, N):
    for j in range(i+1, N):
        for k in range(j+1, N):
            if((max(X[i], X[j], X[k]) - min(X[i], X[j], X[k])) <= M):
                cnt+=1
                _m = max(_m, X[i]+X[j]+X[k])
if(_m == -1):
    print(-1)
else:
    print(f'{cnt} {_m}')