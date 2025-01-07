K = int(input())
S = input()
res = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'

for i in range(len(S)):
    nxt = (i+1)*3 + K
    final_nxt = ((ord(S[i]) - ord('A')) - nxt + 26)%26
    print(res[final_nxt], end='')
