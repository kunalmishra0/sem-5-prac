
cat("[REDACTED] [REDACTED]\n")

# 1. Bar Plot
sales <- c(120, 150, 90, 200)
names(sales) <- c("Q1", "Q2", "Q3", "Q4")

barplot(sales,
        main = "Quarterly Sales",
        xlab = "Quarter",
        ylab = "Sales",
        col = "steelblue")

# 2. Box Plot
boxplot(mtcars$mpg,
        main = "Box Plot of MPG",
        ylab = "Miles per Gallon",
        col = "lightgreen")

# 3. Pie Chart
pie(sales,
    main = "Sales Share by Quarter",
    col = c("red", "blue", "green", "orange"))

# 4. Dot Plot
dotchart(sales,
         main = "Dot Plot of Sales",
         xlab = "Sales",
         color = "darkblue")

# 5. Scatter Plot
plot(mtcars$wt, mtcars$mpg,
     main = "Weight vs MPG",
     xlab = "Weight (1000 lbs)",
     ylab = "Miles per Gallon",
     pch = 19,
     col = "darkred")

