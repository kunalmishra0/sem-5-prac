# AIM: WAP to compute the mean, median and mode of a given numerical vector data.

# CODE :
# Create a numerical vector
data_vec <- c(12, 15, 12, 18, 20, 15, 12, 22)
# Calculate Mean
mean_val <- mean(data_vec)
# Calculate Median
median_val <- median(data_vec)
# Function to calculate Mode
get_mode <- function(x) {
 uniq_x <- unique(x)
 uniq_x[which.max(tabulate(match(x, uniq_x)))]
}
# Calculate Mode
mode_val <- get_mode(data_vec)
# Display results
cat("Mean:", mean_val, "\n")
cat("Median:", median_val, "\n")
cat("Mode:", mode_val, "\n")
