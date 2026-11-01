# User-defined functions and lexical scoping
cat("\n [REDACTED] [REDACTED] \n")
check_number <- function(x) {
  if (x > 0)
    cat("positive \n")
  else if (x < 0)
    cat("negative \n")
  else
    cat("zero \n")
}
check_number(-2)
check_number(5)
cat("\n")

print_natural <- function(n) {
  for (i in 1:n)
    cat(i, "\n")
  cat("\n")
}

print_natural(5)


i <- 1
while (i <= 3) {
  cat("Iteration", i, "\n")
  i <- i + 1
}
cat("\n")


x <- 10

scope_demo <- function() {
  x <- 20
  cat("Inside function x:", x, "\n")
}
scope_demo()
