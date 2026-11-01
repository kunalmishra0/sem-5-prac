# 4(a) Vectors

cat("[REDACTED] [REDACTED]\n")

employees <- c("Sabby", "Cathy", "Lucy")
print(employees)

languages <- c("Swift", "Java", "R")
print(languages[1])
print(languages[3])

dailyActivities <- c("Eat", "Repeat")
cat("Initial Vector:", dailyActivities)

dailyActivities[2] <- "Sleep"
cat("\nUpdated Vector:", dailyActivities)

numbers <- 1:5
print(numbers)

numbers <- rep(c(2, 4, 6), times = 2)
cat("Using times argument:", numbers)

numbers <- rep(c(2, 4, 6), each = 2)
cat("\nUsing each argument:", numbers)

numbers <- c(1, 2, 3, 4, 5)

for (number in numbers) {
  print(number)
}

languages <- c("R", "Swift", "Python", "Java")
cat("Total Elements:", length(languages), "\n")

