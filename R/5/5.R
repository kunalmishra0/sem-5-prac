# Practical 5: Importing data files

cat("[REDACTED] [REDACTED]\n")

# Import CSV file
cat("\n--- CSV File ---\n")
data_csv <- read.csv("5/data.csv")
print(data_csv)

# Import TXT file
cat("\n--- TXT File ---\n")
data_txt <- read.table("5/data.txt", header = TRUE)
print(data_txt)

# Import XLSX file
cat("\n--- XLSX File ---\n")
library(readxl)
data_xlsx <- read_excel("5/data.xlsx")
print(data_xlsx)
