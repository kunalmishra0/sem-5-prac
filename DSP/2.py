s = "hello python"

print("Original:", s)
print("Uppercase:", s.upper())
print("Lowercase:", s.lower())
print("Length:", len(s))
print("Replace:", s.replace("python", "world"))
print("Count of l:", s.count("l"))
print("Position of p:", s.find("p"))

words = s.split()
print("After split:", words)

numbers = [5, 2, 8, 1, 2]

numbers.append(10)
print("After append:", numbers)

numbers.remove(2)
print("After remove:", numbers)

numbers.sort()
print("Sorted:", numbers)

numbers.reverse()
print("Reversed:", numbers)

print("Count of 2:", numbers.count(2))

student = ("Student", 21, "CSE")

print("Tuple:", student)
print("Name:", student[0])
print("Age:", student[1])

print("Count of 21:", student.count(21))
print("Index of CSE:", student.index("CSE"))

name, age, branch = student
print(name, age, branch)

student = {
    "name": "Student",
    "age": 21,
    "branch": "CSE"
}

print("Name:", student.get("name"))
print("Keys:", student.keys())
print("Values:", student.values())
print("Items:", student.items())

student["age"] = 22
student.update({"city": "Delhi"})

print("Updated dictionary:", student)

student.pop("city")
print("After removing city:", student)
