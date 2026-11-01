# AIM: WAP to implement matrices - creation, access, matrix arithmetic.

# 4(c) Matrices


thismatrix <- matrix(c(1, 2, 3, 4, 5, 6), nrow = 3, ncol = 2)
print(thismatrix)

thismatrix <- matrix(c("apple", "banana", "cherry", "orange"), nrow = 2, ncol = 2)
print(thismatrix)

print(thismatrix[1, 2])

print(thismatrix[2, ])

print(thismatrix[, 2])

thismatrix <- matrix(
  c("apple", "banana", "cherry", "orange", "grape", "pineapple", "pear", "melon", "fig"),
  nrow = 3, ncol = 3
)
print(thismatrix[c(1, 2), ])

print(thismatrix[, c(1, 2)])

newmatrix <- cbind(thismatrix, c("strawberry", "blueberry", "raspberry"))
print(newmatrix)

newmatrix <- rbind(thismatrix, c("strawberry", "blueberry", "raspberry"))
print(newmatrix)

thismatrix <- matrix(
  c("apple", "banana", "cherry", "orange", "mango", "pineapple"),
  nrow = 3, ncol = 2
)

thismatrix <- thismatrix[-c(1), -c(1)]
print(thismatrix)

thismatrix <- matrix(c("apple", "banana", "cherry", "orange"), nrow = 2, ncol = 2)
print("apple" %in% thismatrix)

print(dim(thismatrix))

print(length(thismatrix))

for (rows in 1:nrow(thismatrix)) {
  for (columns in 1:ncol(thismatrix)) {
    print(thismatrix[rows, columns])
  }
}

Matrix1 <- matrix(c("apple", "banana", "cherry", "grape"), nrow = 2, ncol = 2)
Matrix2 <- matrix(c("orange", "mango", "pineapple", "watermelon"), nrow = 2, ncol = 2)

Matrix_Combined <- rbind(Matrix1, Matrix2)
print(Matrix_Combined)

Matrix_Combined <- cbind(Matrix1, Matrix2)
print(Matrix_Combined)

