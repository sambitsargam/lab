def count_words():
    file = open("article.txt","r")
    count = 0
    data = file.read()
    words = data.split()
    for word in words:
        if word == 'this' or word =='these':
            count+=1
    print(count)
    file.close()

count_words()
