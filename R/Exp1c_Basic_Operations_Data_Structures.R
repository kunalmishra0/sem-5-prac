# AIM: Basic operations, data types, data structures (vectors, matrices, lists, factors, data frames), and reading/writing CSV in R.

# 1. Basic Operations in R
a <- 10
b <- 20

cat("Addition:", a + b, "\n")
cat("Subtraction:", a - b, "\n")
cat("Multiplication:", a * b, "\n")
cat("Division:", a / b, "\n")

# 2. R Data Types
num <- 10.5
integer_num <- 10L
character <- "Hello R"
logical <- TRUE
complex_num <- 2 + 3i

print(num)
print(integer_num)
print(character)
print(logical)
print(complex_num)

# Display data types
cat("Data type of num:", typeof(num), "\n")
cat("Data type of integer:", typeof(integer_num), "\n")
cat("Data type of character:", typeof(character), "\n")
cat("Data type of logical:", typeof(logical), "\n")

# 3. R Objects

# Vector
v <- c(10, 20, 30, 40)
print(v)

# Matrix
m <- matrix(1:9, nrow = 3, ncol = 3)
print(m)

# List
my_list <- list("Student", 21, TRUE)
print(my_list)

# Factor
gender <- factor(c("Male", "Female", "Male"))
print(gender)

# Data Frame
students <- data.frame(
  Name = c("Student", "Rahul", "Aman"),
  Age = c(21, 20, 22),
  Marks = c(85, 90, 78)
)
print(students)

# 4. Reading Data from CSV
write.csv(students, "students.csv", row.names = FALSE)

data <- read.csv("students.csv")
print(data)

# 5. Writing Data to CSV
write.csv(data, "output.csv", row.names = FALSE)

cat("Data successfully written to output.csv\n")