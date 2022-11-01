nums = []
totPositive = 0
totNegative = 0
totZero = 0
print(end="Enter the Size: ")
s = int(input())
print(end="Enter " +str(s)+ " Numbers: ")
for i in range(s):
  nums.insert(i, int(input()))
for i in range(s):
  if nums[i]>0:
    totPositive = totPositive+1
  elif nums[i]<0:
    totNegative = totNegative+1
  else:
    totZero = totZero+1
print(end="\nPositive Number(s): " +str(totPositive))
print("\nNegative Number(s): " +str(totNegative))
print("Zero(s): " +str(totZero))
