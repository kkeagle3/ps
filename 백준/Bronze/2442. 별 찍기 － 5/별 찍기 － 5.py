n=int(input())
for i in range(n):
    print(" "*(n-i-1),sep="",end="")
    print("*"*(2*i+1),sep="")