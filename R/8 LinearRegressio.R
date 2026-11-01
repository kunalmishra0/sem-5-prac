#WA to perform simple linear regression and corelation analysis between two numeric variables.

hours <- c(1, 2, 3, 4, 5, 6, 7)
Marks <- c(35, 40, 45, 50, 55, 60, 70)
cat("[REDACTED] [REDACTED]\n")

Correlation <- cor(hours, Marks)
cat("Correlation Co-efficient:", Correlation, "\n")

Model <- lm(Marks ~ hours)
print(summary(Model))

new_pred <- predict(Model, data.frame(hours = 8))
cat("Predicted marks for 8 hours:", new_pred, "\n")
