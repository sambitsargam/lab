def count_words():
    file = open("notes.txt","r")
    count = 0
    data = file.read()
    words = data.split()
    for word in words:
        count += 1
    print("Total words are",count)
    file.close()

count_words()
