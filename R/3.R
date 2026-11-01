# Practical 3: Loop Functions, Date and Time

cat("[REDACTED] [REDACTED]\n")

# Create a vector of dates
dates <- as.Date(c("2026-01-10", "2026-02-15", "2026-03-20",
                   "2026-04-05", "2026-05-18"))

# Display the dates
print(dates)

# Extract year, month and day using lapply()
date_parts <- lapply(dates, function(x) {
  c(year = format(x, "%Y"),
    month = format(x, "%m"),
    day = format(x, "%d"))
})

print(date_parts)

# Extract years and months using sapply()
years <- sapply(dates, function(x) format(x, "%Y"))
months <- sapply(dates, function(x) format(x, "%m"))

print(years)
print(months)

# Create values associated with each date
values <- c(100, 200, 150, 300, 250)

# Group values by month using tapply()
monthly_total <- tapply(values, months, sum)

print(monthly_total)

# Find difference between consecutive dates
date_difference <- diff(dates)

print(date_difference)

# Display current date and time
current_datetime <- Sys.time()

print(current_datetime)
