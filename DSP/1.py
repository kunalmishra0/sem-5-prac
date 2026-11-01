#Perform Creation, indexing, slicing, concatenation and repetition operations on Python built-in 
# data    types: Strings, List, Tuples, Dictionary, Set 

print("LIST")

list1 = [10, 20, 30, 40, 50]

print("First element:", list1[0])
print("Last element:", list1[-1])
print("Slice:", list1[1:4])

list2 = [60, 70]
print("After concatenation:", list1 + list2)
print("After repetition:", list1 * 2)

print("\nTUPLE")

tuple1 = (1, 2, 3, 4, 5)

print("First element:", tuple1[0])
print("Slice:", tuple1[2:])

tuple2 = (6, 7)
print("After concatenation:", tuple1 + tuple2)
print("After repetition:", tuple1 * 2)

print("\nDICTIONARY")

student = {
    "Name": "Alice",
    "Age": 20,
    "City": "Delhi"
}

print("Name:", student["Name"])
print("Age:", student["Age"])
print("Dictionary does not support slicing.")

extra = {"Country": "India"}
student.update(extra)
print("Updated Dictionary:", student)
print("Dictionary does not support repetition.")

print("\nSET")

set1 = {10, 20, 30, 40}
set2 = {50, 60}

print("Set does not support indexing.")
print("Set does not support slicing.")
print("Union of sets:", set1.union(set2))
print("Set does not support repetition.")

print("\nSTRING")

text = "Python"

print("First character:", text[0])
print("Slice:", text[1:5])
print("After concatenation:", text + " Programming")
print("After repetition:", text * 3)