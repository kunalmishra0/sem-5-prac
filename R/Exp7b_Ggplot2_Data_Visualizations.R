# AIM: Advanced data visualization in R using ggplot2 (scatter plot, bar plot, line plot, histogram, box plot).

# Install and load ggplot2 package
install.packages("ggplot2")
library(ggplot2)

# Create a sample dataset
data <- data.frame(
  Name = c("A", "B", "C", "D", "E"),
  Marks = c(75, 85, 60, 90, 70),
  Hours = c(2, 4, 1, 5, 3),
  Gender = c("Male", "Female", "Male", "Female", "Male")
)

# 1. Scatter Plot
ggplot(data, aes(x = Hours, y = Marks)) +
  geom_point(color = "blue", size = 3) +
  ggtitle("Study Hours vs Marks") +
  xlab("Study Hours") +
  ylab("Marks")

# 2. Bar Plot
ggplot(data, aes(x = Name, y = Marks)) +
  geom_bar(stat = "identity", fill = "green") +
  ggtitle("Student Marks") +
  xlab("Student") +
  ylab("Marks")

# 3. Line Plot
ggplot(data, aes(x = Name, y = Marks, group = 1)) +
  geom_line(color = "red", linewidth = 1) +
  geom_point(size = 3) +
  ggtitle("Marks Line Plot") +
  xlab("Student") +
  ylab("Marks")

# 4. Histogram
ggplot(data, aes(x = Marks)) +
  geom_histogram(binwidth = 10, fill = "orange", color = "black") +
  ggtitle("Distribution of Marks") +
  xlab("Marks") +
  ylab("Frequency")

# 5. Box Plot
ggplot(data, aes(x = Gender, y = Marks, fill = Gender)) +
  geom_boxplot() +
  ggtitle("Marks Distribution by Gender") +
  xlab("Gender") +
  ylab("Marks")