# AIM: WAP to implement data frames - creation, summary, manipulation.

# 4(b) Data Frames


Data_Frame <- data.frame(
  Training = c("Strength", "Stamina", "Other"),
  Pulse = c(100, 150, 120),
  Duration = c(60, 30, 45)
)
print(Data_Frame)

print(summary(Data_Frame))

print(Data_Frame[1])
print(Data_Frame[["Training"]])
print(Data_Frame$Training)

New_row_DF <- rbind(Data_Frame, c("Strength", 110, 110))
print(New_row_DF)

New_col_DF <- cbind(Data_Frame, Steps = c(1000, 6000, 2000))
print(New_col_DF)

Data_Frame_New <- Data_Frame[-c(1), -c(1)]
print(Data_Frame_New)

print(dim(Data_Frame))
print(ncol(Data_Frame))
print(nrow(Data_Frame))
print(length(Data_Frame))

Data_Frame1 <- data.frame(
  Training = c("Strength", "Stamina", "Other"),
  Pulse = c(100, 150, 120),
  Duration = c(60, 30, 45)
)

Data_Frame2 <- data.frame(
  Training = c("Stamina", "Stamina", "Strength"),
  Pulse = c(140, 150, 160),
  Duration = c(30, 30, 20)
)

New_Data_Frame <- rbind(Data_Frame1, Data_Frame2)
print(New_Data_Frame)

Data_Frame3 <- data.frame(
  Training = c("Strength", "Stamina", "Other"),
  Pulse = c(100, 150, 120),
  Duration = c(60, 30, 45)
)

Data_Frame4 <- data.frame(
  Steps = c(3000, 6000, 2000),
  Calories = c(300, 400, 300)
)

New_Data_Frame1 <- cbind(Data_Frame3, Data_Frame4)
print(New_Data_Frame1)

