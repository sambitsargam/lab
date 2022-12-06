s1=raw_input("Enter first string:")
s2=raw_input("Enter second string:")
a=list(set(s1)&set(s2))
print("The common letters are:")
for i in a:
    print(i)
