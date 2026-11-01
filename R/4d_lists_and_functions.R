# 4(d) Lists and Functions

cat("[REDACTED] [REDACTED]\n")

mylist <- list(
  name = "Kunal",
  age = 20,
  marks = c(85, 90, 88),
  passed = TRUE
)

print(mylist)

print(mylist[1])
print(mylist[[2]])
print(mylist$name)
print(mylist$marks)
print(mylist$marks[2])

mylist$age <- 21
print(mylist)

mylist$course <- "B.Tech CSE AI/ML"
print(mylist)

mylist$passed <- NULL
print(mylist)

cat("Length of list:", length(mylist), "\n")

for (item in mylist) {
  print(item)
}

nested_list <- list(
  vector = c(1, 2, 3),
  matrix = matrix(1:4, nrow = 2),
  list = list("R", "Python", "C++")
)

print(nested_list)
print(nested_list$vector)
print(nested_list$matrix)
print(nested_list$list)

greet <- function() {
  cat("Hello, welcome to R programming!\n")
}

greet()

add <- function(a, b) {
  result <- a + b
  return(result)
}

cat("Sum:", add(10, 20), "\n")

square <- function(n) {
  return(n * n)
}

cat("Square:", square(5), "\n")

find_max <- function(a, b) {
  if (a > b) {
    return(a)
  } else {
    return(b)
  }
}

cat("Maximum:", find_max(15, 10), "\n")

power <- function(number, exponent = 2) {
  return(number ^ exponent)
}

cat("Power:", power(5), "\n")
cat("Power:", power(5, 3), "\n")

calculate_average <- function(numbers) {
  return(mean(numbers))
}

numbers <- c(10, 20, 30, 40, 50)

cat("Average:", calculate_average(numbers), "\n")

