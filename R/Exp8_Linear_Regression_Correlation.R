# AIM: WAP to perform linear regression and numeric correlation analysis between two variables.

hours <- c(1, 2, 3, 4, 5, 6, 7)
Marks <- c(35, 40, 45, 50, 55, 60, 70)

Correlation <- cor(hours, Marks)
cat("Correlation Co-efficient:", Correlation, "\n")

Model <- lm(Marks ~ hours)
print(summary(Model))

new_pred <- predict(Model, data.frame(hours = 8))
cat("Predicted marks for 8 hours:", new_pred, "\n")
