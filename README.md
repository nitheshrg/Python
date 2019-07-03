n=int(input())
b=n*2-1
for i in range(b):
    for j in range(b):
        if i>=j and i<b-j:
            print(n-j,end='')
        elif j>=i and j<b-i:
            print(n-i,end='')
        elif i>=j and i<b-j:
            print(n-j,end='')
        elif j>=i and j<b-i:
            print(n-i,end='')
        else:
            print(n,end='')
    print()
