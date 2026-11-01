# AIM: Basic Calculator using Control Flow and Functions.

calculator <- function(a, b, operator) {
  if (operator == "+") {
    result <- a + b
  } 
  else if (operator == "-") {
    result <- a - b
  } 
  else if (operator == "*") {
    result <- a * b
  } 
  else if (operator == "/") {
    result <- a / b
  } 
  else {
    result <- "Invalid operator"
  }
  
  return(result)
}

# Input
a <- as.numeric(readline("Enter first number: "))
b <- as.numeric(readline("Enter second number: "))
operator <- readline("Enter operator (+, -, *, /): ")

# Calculate and display result
result <- calculator(a, b, operator)

cat("Result:", result, "\n")
