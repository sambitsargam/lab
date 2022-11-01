n=int(input("enter range:"))
def sumOfSeries(num):
	res = 0
	fact = 1
	for i in range(1, num+1):
		fact *= i
		res = res + (i/ fact)
	return res
print("Sum: ", sumOfSeries(n))


#sum series(1-1/2+1/3-1/4+....)

n = int(input("Enter the value of n: "))
sum = 0
sign = -1
for i in range(1,n+1):
    sign = sign * -1
    sum = sum + sign * 1/i
print("Sum of series for first",n,"terms is: ",sum)
