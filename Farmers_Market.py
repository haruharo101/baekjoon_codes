a, b = map(int, input().split())
c = int(input())
ans = (a*b)//12
if((a*b)%12 > 0): ans+=1
print(ans * c)