input1 = input()
input1 = int(input1)

for i in range(input1):
    n = int(input())
    ans = 0;
    blocks = 0;
    for j in range(n,1,-2):
        blocks = blocks + (4*(j-1));
        ans = ans + blocks
    print(ans)
