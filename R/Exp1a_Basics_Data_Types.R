# AIM: Basics of R, R data types and objects, reading & writing data.

num_var     <- 25.5
int_var     <- 10L
char_var    <- "R Programming"
logi_var    <- TRUE
complex_var <- 3 + 2i

cat("Numeric  :", class(num_var), "\n")
cat("Integer  :", class(int_var), "\n")
cat("Character:", class(char_var), "\n")
cat("Logical  :", class(logi_var), "\n")
 
df <- data.frame(Name = c("Amit", "Riya", "Student"),Marks = c(85, 90, 78))
write.csv(df, "students.csv", row.names = FALSE)
 
data_read <- read.csv("students.csv")
print(data_read)
