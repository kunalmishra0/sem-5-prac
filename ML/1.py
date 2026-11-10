# AIM: Explore the basics of Python (functions, strings, dictionaries, lists).

# 1. create a function that takes a string as input and capitalizes a letter if its ASCII code 
# is even and returns its lower case version if its ASCII code is odd.

def ascii_Capitalize(word):
    for c in word:
        if ord(c)%2==0:
            print(c.upper(), end="")
        else:
            print(c.lower(), end="")
    print()
            
ascii_Capitalize("python programming")

# 2. write a function that replaces all vowels in a string with a specified vowel.

def vow_replace(word,vowel):
    for c in word:
        if c in ["a","e","i","o","u"]:
            word=word.replace(c,vowel)
    print(word)
        

vow_replace("machine learning","i")


# 3. write a function that creates a dict with each (key,value) pair being the (lowercase,uppercase) 
# versions of a letter, respectively.

def mapping(list):
    wordmap={}
    for c in list:
        wordmap[c]=c.upper()
        
    print(wordmap)

mapping(['s','o','n','i','t'])

# 4.#create a function that takes three integer arguments(a,b,c) and returns the amount of integers which are of equal value.

def equal(a,b,c):
    if(a==b==c):
        print(3)
    elif(a==b or b==c or c==a):
        print(2)
    else:
        print(0)
        
equal(3,3,3)    

# 5. create a function that takes a list of strings and return a list
#sorted from shortest to longest

def sort_by_length(lst):
    return sorted(lst, key=len)
print(sort_by_length(["Google", "Apple", "Microsoft", "AI"]))