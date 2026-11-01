# AIM: WAP to create basic plots (scatter and bar graph) using ggplot2.

install.packages("ggplot2", repos = "https://cloud.r-project.org")
library(ggplot2)
df <- data.frame(
 Subject = c("Maths", "Science", "English", "R Prog"),
 Score = c(95, 85, 92, 88)
)
# Scatter Plot
ggplot(df, aes(x = Subject, y = Score)) +
 geom_point(size = 4) +
 labs(
 title = "Score Scatter Plot",
 x = "Subject",
 y = "Score"
 )
# Bar Chart
ggplot(df, aes(x = Subject, y = Score, fill = Subject)) +
 geom_bar(stat = "identity") +
 labs(
 title = "Score Bar Chart",
 x = "Subject",
 y = "Score"
 )