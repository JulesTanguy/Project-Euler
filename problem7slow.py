def estPremier(n):
    for i in range(2,n):
        if n%i==0:
            return False
    return True

i=2
x=0

while x!=10001:
    if estPremier(i):
        x += 1
    i += 1

print(i-1)
