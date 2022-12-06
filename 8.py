def show_all_in_dict(dict):
    """
    Print all the key in dict.
    
    Arguments:
    dict -- a dictionary needed to be print it's key.
    
    """
    print('We know the birthdays of:')
    for key in dict:
        print(key)

# Useless
def search(query, dict):
    """
    Search the person's birthday is in the dict or not.
    
    Arguments:
    query -- the name of person the user want to know.
    dict -- a dictionary needed to be print it's key.
    
    Returns:
    birthday -- the birthday of the query.
    """
    return dict[query] if query in dict else None

def main():
    Birthdays ={"Albert Einstein": "14/3/1889",
                "Bill Gates": "28/10/1955",
                "Steve Jobs": "24/2/1955"}
    print('Welcome to the birthday dictionary.')
    show_all_in_dict(Birthdays)
    query = input("Who's birthday do you want to look up?")
    result = Birthdays[query] if query in Birthdays else None
    if result == None:
        print('No Data')
    else:
        print("{}'s birthday is {}".format(query, Birthdays[query]))
    
        
if __name__ == "__main__":
    main()
