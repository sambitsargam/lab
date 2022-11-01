sin x series

x = int(input("Enter the value of x: "))
n = int(input("Enter the value of n: "))
sign = -1
fact = i =1
sum = 0
while i<=n:
    p = 1
    fact = 1
    for j in range(1,i+1):
        p = p*x
        fact = fact*j
    sign = -1*sign
    sum = sum + sign* p/fact
    i = i+2
print("sin(",x,") =",sum)



#cos x series

x = int(input("Enter the value of x: "))
n = int(input("Enter the value of n: "))
sign=-1
fact=1
i=2
sum=0
while i<=n:
    p=1
    fact=1
    for j in range(1,i+1):
        p = p*x
        fact = fact*j
    sum= sum + sign* p/fact
    sign = -1*sign
    i = i+2
print("cos(",x,") =",1+sum)


#guess the number

import random
computer = random.randint(1,100)
player = 0
tries=0
print("Guess My Number Game")
while(player != computer):
    player = int(input('Enter your guess: '))
    tries = tries + 1
    if player < computer:
        print('Too low, try again.')
    elif player > computer:
        print('Too high, try again.')
    else:
        print("Correct!,you got it in",tries,"tries")
