1. text = input('Enter a string: ')
newtext = text[1:] + text[0]
print('New string:', newtext)

2. text = input('Enter a string: ')
#index of first space
space1 = text.find(' ')
#index of second space
space2 = text.find(' ',space1+1)
newtext = text[0] +'. '  + text[space1+1] +'. ' + text[space2+1] +'.'
print('New string:', newtext)

3.text = input('Enter a string: ')
newtext = text[::-1]

if text == newtext:
    print('String is palindrome')
else:
    print('String is not palindrome')


4- def change_sring(str1):
      return str1[-1:] + str1[1:-1] + str1[:1]
	  
print(change_sring('abcd'))
print(change_sring('12345'))

5-def odd_values_string(str):
  result = "" 
  for i in range(len(str)):
    if i % 2 == 0:
      result = result + str[i]
  return result

print(odd_values_string('abcdef'))
print(odd_values_string('python'))

6-str = input("Enter the String :")
print("Given String :",str)
print("UpperCase :"+ str.upper())
print("LowerCase :"+ str.lower())

7-items = input("Input comma separated sequence of words")
words = [word for word in items.split(",")]
print(",".join(sorted(list(set(words)))))

8-def add_tags(tag, word):
	return "<%s>%s</%s>" % (tag, word, tag)
print(add_tags('i', 'Python'))
print(add_tags('b', 'Python Tutorial'))

9-def insert_sting_middle(str, word):
	return str[:2] + word + str[2:]

print(insert_sting_middle('[[]]', 'Python'))
print(insert_sting_middle('{{}}', 'PHP'))
print(insert_sting_middle('<<>>', 'HTML'))

10-def insert_end(str):
	sub_str = str[-2:]
	return sub_str * 4

print(insert_end('Python'))
print(insert_end('Exercises'))

11-def first_three(str):
	return str[:3] if len(str) > 3 else str

print(first_three('ipy'))
print(first_three('python'))
print(first_three('py'))

12-str1 = 'hiii how are you'
print(str1.rsplit('/', 1)[0])
print(str1.rsplit('-', 1)[0])

13-string = "computer "
print(string.startswith("com"))

14-import textwrap
sample_text ='''
    Python is a widely used high-level, general-purpose.
    '''
text_without_Indentation = textwrap.dedent(sample_text)
wrapped = textwrap.fill(text_without_Indentation, width=50)
final_result = textwrap.indent(wrapped, '> ')
print()
print(final_result)
print()

15-a=input()
l=[]
for i in a:
    if(i>='0' and i<='9'):
        l.append(int(i))
print(sum(l))
print(sum(l)/len(l))
