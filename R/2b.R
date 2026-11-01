cat("\n [REDACTED] [REDACTED] \n")

cat("Enter the number of terms: ")
n <- as.integer(readLines("stdin", n = 1))

a <- 0
b <- 1

cat("Fibonacci Series(without recursion):\n")

for (i in 1:n) {
    cat(a, " ")
    
    next_term <- a + b
    a <- b
    b <- next_term
}

fibonacci <- function(n) {
    if (n <= 1) {
        return(n)
    }
    
    return(fibonacci(n - 1) + fibonacci(n - 2))
}

cat("\nEnter number of terms: ")
n <- as.integer(readLines("stdin", n = 1))

cat("Fibonacci Series(with recursion):\n")

for (i in 0:(n - 1)) {
    cat(fibonacci(i), " ")
}
