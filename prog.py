## 3
mylist = []
size = int(input('How many elements you want to enter? '))

print('Enter',str(size),'elements')

for i in range(size):
    data = int(input())
    mylist.append(data)

#reverse the list
for i in range(size//2):
    #swapping elements
    mylist[i],mylist[len(mylist)-1-i] = mylist[len(mylist)-1-i], mylist[i]

print('Reverse list:', mylist)

## 4
mylist = []
size = int(input('How many elements you want to enter? '))

print('Enter',str(size),'positive numbers')

for i in range(size):
    data = int(input())
    mylist.append(data)

max = 0
for data in mylist:
    if data > max:
        max = data

print('The largest number in list is', max)

## 5
number = []
size = int(input('How many elements you want to enter? '))

print('Enter',str(size),'numbers')

for i in range(size):
    data = int(input())
    number.append(data)

print(number)

for i in range(size):
    if number[i]%2 == 0:
        number[i] = number[i] / 2
    else:
        number[i] =  number[i] * 3

print(number)

## 6
l = eval(input("Enter the list: "))
print("Original List")
print(l)

l = l[-1:] + l[:-1]

print("Rotated List")
print(l)

## 7
text = input('Enter a string: ')
words = text.split()

data = input('Enter a word to delete: ')
status = False

for word in words:
    if word == data:
        words.remove(word)
        status = True

if status:
    text = ' '.join(words)
    print('String after deletion:',text)
else:
    print('Word not present in string.')


## 12
A=[]
n=int(input("Enter N for N x N matrix: "))         
print("Enter the element ::>")
for i in range(n): 
   row=[]                                      #temporary list to store the row
   for j in range(n): 
      row.append(int(input()))           #add the input to row list
      A.append(row)                      #add the row to the list
print(A)
# [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
#Display the 2D array
print("Display Array In Matrix Form")
for i in range(n):
   for j in range(n):
      print(A[i][j], end=" ")
   print()                                        #new line
B=[]
n=int(input("Enter N for N x N matrix : "))           #3 here
#use list for storing 2D array
#get the user input and store it in list (here IN : 1 to 9)
print("Enter the element ::>")
for i in range (n): 
   row=[]                                      #temporary list to store the row
   for j in range(n): 
      row.append(int(input()))           #add the input to row list
      B.append(row)                       #add the row to the list
print(B)
# [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
#Display the 2D array
print("Display Array In Matrix Form")
for i in range(n):
   for j in range(n):
      print(B[i][j], end=" ")
   print()                                           
result = [[0,0,0], [0,0,0], [0,0,0]] 
for i in range(len(A)): 
   for j in range(len(B[0])): 
      for k in range(len(B)): 
         result[i][j] += A[i][k] * B[k][j] 
print("The Resultant Matrix Is ::>")
for r in result: 
   print(r) 

## 11
# Program to add two matrices using nested loop
A=[]
n=int(input("Enter N for N x N matrix : "))         #3 here
#use list for storing 2D array
#get the user input and store it in list (here IN : 1 to 9)
print("Enter the element ::>")
for i in range(n): 
   row=[]                                        #temporary list to store the row
for j in range(n): 
   row.append(int(input()))                #add the input to row list
A.append(row)                               #add the row to the list
print(A)
# [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
#Display the 2D array
print("Display Array In Matrix Form")
for i in range(n):
   for j in range(n):
      print(A[i][j], end=" ")                  #new line
   print() 
B=[]
n=int(input("Enter N for N x N matrix : "))        #3 here
#use list for storing 2D array
#get the user input and store it in list (here IN : 1 to 9)
print("Enter the element ::>")
for i in range(n): 
   row=[]                                        #temporary list to store the row
   for j in range(n): 
      row.append(int(input()))             #add the input to row list
   B.append(row)                            #add the row to the list
print(B)
# [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
#Display the 2D array
print("Display Array In Matrix Form")
for i in range(n):
   for j in range(n):
      print(B[i][j], end=" ")
   print()                                            #new line
result = [[0,0,0], [0,0,0], [0,0,0]] 
# iterate through rows 
for i in range(n):    
# iterate through columns 
for j in range(len(A[0])): 
   result[i][j] = A[i][j] + B[i][j] 
print("Resultant Matrix is ::>")
for r in result: 
   print("Resultant Matrix is ::>",r)

