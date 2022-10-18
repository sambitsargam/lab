#lab 2
#ques-1
# age1=int(input('enter age1: '))
# age2=int(input('enter age2: '))
# age3=int(input('enter age3: '))
# if age1>age2 and age1>age3:
#     print('age1 is oldest')
# elif age2>age1 and age2>age3:
#     print('age2 is oldest')
# else:
#     print('age3 is oldest')
# if age1<age2 and age1<age3:
#     print('age1 is youngest')
# elif age2<age1 and age2<age3:
#     print('age2 is youngest')
# else:
#      print('age3 is youngest')

#ques-2
# a=int(input("enter the number"))
# if a%3==0:
#     print("pling")
# elif a%5==0:
#     print("plang")
# elif a%7==0:
#     print("plong")
# else:
#     print("plingplongplang")

#ques-3
# num=int(input("enter the number"))
# dig=num%10
# if dig%3==0:
#     print(dig," is divisible by 3")
# else:
#     print(dig," is not divisible by 3")

#ques-4
# num = int(input("enter the number"))
# if num>0:
#     print("height above the water")
#     print("you can breath")
# elif num==0:
#     print("height is sea level")
#     print("you can brath")
# else:
#     print("depth below the water surface")
#     print("you can not breathe")
#ques-05

#ques-06
# n=int(input("enter the year"))
# if n%4==0 and n%400==0:
#     print("the year is leap year")
# elif n%4==0 and n%100==0:
#     print("the year is not aleap year")
# else:
#     print("the year is not a leap year")
#ques-07
# n=int(input("enter the year"))
# if n%4==0 and n%400==0:
#     print("the distance is 1825+6=1831km")
# elif n%4==0 and n%100==0:
#     print("the distance is 1825km")
# else:
#     print("the distance is 1825km")
#ques-08
# num1=int(input("enter the first number"))
# num2=int(input("enter the second number"))
# if num1 > num2:
#     print("hii")
# else:
#     print("byy")
#ques-09
# sal=int(input("enter your salary"))
# yr=int(input("enter the starting year of service"))
# if yr>5:
#     print("your salary is",sal+(0.05*sal))
# else:
#     print("you are not eligible")
#ques-10
# unit_price = 100
#
# discount_threshold = 1000
#
# quantity = int(input("Quantity -> "))
#
# total = quantity * unit_price
#
# if total > discount_threshold:
#
#    total = (quantity * unit_price) - (100 * 10/100)
#
# print("Your total is {}".format(total))
#ques-11
# units = int(input())
#
# if units <= 100:
#
#   print("0 is the total charge")
#
# elif units > 100 and units <= 200:
#
#   print(((units - 100) * 5)," is the total charge")
#
# else:
#
#   print((((units - 100) * 5) + ((units - 200) * 10)) ," is the total charge")
#ques-12
# price = int(input('Enter price of product: '))
# quantity = int(input('Enter quantity: '))
# amount = price * quantity
#
# if amount > 2000:
#     discount = amount*0.20
# else:
#     discount = 0
#
# net_amount = amount - discount
#
# print('Bill amount:',amount)
# print('Discount:',discount)
# print('Your net bill amount is',net_amount)
#ques-17
# marks = int(input('Enter your marks in CS: '))
#
# if marks>=90:
#     grade = 'A'
# elif marks>=80:
#     grade = 'B'
# elif marks>=70:
#     grade = 'C'
# elif marks>=60:
#     grade = 'D'
# else:
#     grade = 'F'
#
# print('Your grade is',grade)
#ques-18
# a=int(input("Number of classes held:"))
#
# b=int(input("Number of classes attended:"))
#
# percentage=b/a*100
#
# if percentage>=75:
#
#         print("The student is allowed to sit in the exam hall")
#
# else:
#
#         print("The student is not allowed to sit in the exam hall")
#ques-19
# day= int(input("Enter a number 1-7 : "))
#
# if (day==1):
#     print(day," is Sunday")
# elif (day==2):
#     print(day," is Monday")
# elif (day==3):
#     print(day," is Tuesday")
# elif (day==4):
#     print(day," is Wednesday")
# elif (day==5):
#     print(day," is Thursday")
# elif (day==6):
#     print(day," is Friday")
# elif (day==7):
#     print(day," is Saturday")
# else:
#     print("Wrong Input!!!!!")
#ques-20
# letter = input("Enter a letter: ")
# if letter in ('a','e','i','o','u'):
#     print(letter," is a vowel.")
# else:
#     print(letter,"is a consonant.")
