# Semester 5 Practical Repository (sem-5-prac)

This repository contains clean, organized laboratory experiment codes and datasets for **Design and Analysis of Algorithms (DAA)**, **R Programming (R)**, and **Machine Learning / Data Science Practicals (ML & DSP)**.

---

## ⚡ Quick Setup & Synchronization Commands

Use these commands on any machine to quickly copy, set up, or pull the latest changes locally.

### 1. Clone the repository for the first time
```bash
git clone https://github.com/kunalmishra0/sem-5-prac.git
cd sem-5-prac
```

### 2. Pull the latest updates locally
Whenever new experiments or updates are pushed to GitHub, run:
```bash
git pull origin main
```

### 3. Discard local edits and force match remote (if needed)
If you made local test changes and want to reset your local copy cleanly to match remote:
```bash
git fetch origin
git reset --hard origin/main
```

---

## 📁 Repository Structure & Experiment Index

### 1. Design and Analysis of Algorithms (DAA)

All programs include an AIM comment header directly matching the practical syllabus.

| S.No | Experiment Name / Aim | File Path |
|:---:|:---|:---|
| **1** | WAP to sort numbers in ascending/descending order using different sorting algorithms, calculate time complexity and plot a graph | [`DAA/Exp1_Sorting_Time_Complexity.c`](DAA/Exp1_Sorting_Time_Complexity.c) |
| **2** | To find a number in an array using Binary search method | [`DAA/Exp2_Binary_Search.c`](DAA/Exp2_Binary_Search.c) |
| **3** | To sort a set of numbers using Merge Sort and Quick Sort using Divide and Conquer method | [`DAA/Exp3_Merge_Quick_Sort.c`](DAA/Exp3_Merge_Quick_Sort.c) |
| **4** | To find the occurrence of a pattern string using Naive String matching algorithm | [`DAA/Exp4_Naive_String_Matching.c`](DAA/Exp4_Naive_String_Matching.c) |
| **5** | WAP to multiply 2 matrices using Strassen's Matrix multiplication algorithm | [`DAA/Exp5_Strassen_Matrix_Multiplication.c`](DAA/Exp5_Strassen_Matrix_Multiplication.c) |
| **6** | WAP to solve Knapsack problem using Greedy Algorithm | [`DAA/Exp6_Greedy_Knapsack.c`](DAA/Exp6_Greedy_Knapsack.c) |
| **7** | WAP to solve Job Scheduling problem with deadline using Greedy algorithm | [`DAA/Exp7_Job_Scheduling_Deadline.c`](DAA/Exp7_Job_Scheduling_Deadline.c) |
| **8** | WAP to implement a graph using a 2D array and obtain Min. Cost Spanning Tree using Kruskal's Greedy algorithm | [`DAA/Exp8_Kruskal_MCST.cpp`](DAA/Exp8_Kruskal_MCST.cpp) |
| **9** | To implement Bellman-Ford algorithm to find single-source shortest path and detect negative weight cycles | [`DAA/Exp9_Bellman_Ford_Algorithm.c`](DAA/Exp9_Bellman_Ford_Algorithm.c) |
| **10** | Solve the Travelling Salesman Problem (TSP) with recursion & backtracking to find minimum travelling cost | [`DAA/Exp10_Travelling_Salesman_Problem.cpp`](DAA/Exp10_Travelling_Salesman_Problem.cpp) / [`.c`](DAA/Exp10_Travelling_Salesman_Problem.c) |
| **11** | WAP to find Hamiltonian Cycle in a graph using backtracking algorithm | [`DAA/Exp11_Hamiltonian_Cycle.cpp`](DAA/Exp11_Hamiltonian_Cycle.cpp) |
| **12** | Construct an Optimal Binary Search Tree (OBST) using Dynamic Programming | [`DAA/Exp12_Optimal_Binary_Search_Tree.cpp`](DAA/Exp12_Optimal_Binary_Search_Tree.cpp) |
| **13** | Solve the 0/1 Knapsack Problem using Dynamic Programming | [`DAA/Exp13_01_Knapsack_Dynamic_Programming.cpp`](DAA/Exp13_01_Knapsack_Dynamic_Programming.cpp) |
| **14** | Find and display all subsets of distinct positive integers equal to target using Backtracking | [`DAA/Exp14_Sum_Of_Subsets_Backtracking.cpp`](DAA/Exp14_Sum_Of_Subsets_Backtracking.cpp) |

---

### 2. R Programming (R)

All R scripts have been mapped to their respective lab index experiments with aims commented at the start.

| S.No | Experiment Name / Aim | File Path |
|:---:|:---|:---|
| **1** | Basics of R, R data types and objects, reading & writing data | [`R/Exp1a_Basics_Data_Types.R`](R/Exp1a_Basics_Data_Types.R) |
| **1 (Ext)** | Basic Calculator using Control Flow and Functions | [`R/Exp1b_Basic_Calculator.R`](R/Exp1b_Basic_Calculator.R) |
| **1 (Ext)** | Basic Operations, Data Structures (vectors, matrices, lists, factors, data frames) & CSV I/O | [`R/Exp1c_Basic_Operations_Data_Structures.R`](R/Exp1c_Basic_Operations_Data_Structures.R) |
| **2** | Learn the control structures, functions, scoping rules | [`R/Exp2a_Control_Structures_Functions.R`](R/Exp2a_Control_Structures_Functions.R) |
| **2 (Ext)** | Control structures and functions - Fibonacci series (iterative & recursive) | [`R/Exp2b_Fibonacci_Series.R`](R/Exp2b_Fibonacci_Series.R) |
| **3** | Loop functions, date and time (`lapply`, `sapply`, `tapply`, date diff) | [`R/Exp3_Loop_Functions_Date_Time.R`](R/Exp3_Loop_Functions_Date_Time.R) |
| **4** | WAP to implement vectors, matrices, lists, dataframes and functions (Comprehensive) | [`R/Exp4_Data_Structures_Comprehensive.R`](R/Exp4_Data_Structures_Comprehensive.R) |
| **4a** | Vectors: creation, access, slicing, repetitions, loops | [`R/Exp4a_Vectors.R`](R/Exp4a_Vectors.R) |
| **4b** | Data Frames: creation, structure, indexing | [`R/Exp4b_Data_Frames.R`](R/Exp4b_Data_Frames.R) |
| **4c** | Matrices: creation, indexing, dimensions | [`R/Exp4c_Matrices.R`](R/Exp4c_Matrices.R) |
| **4d** | Lists and Functions: definition, access, and custom functions | [`R/Exp4d_Lists_Functions.R`](R/Exp4d_Lists_Functions.R) |
| **5** | WAP to import data files (e.g., `.xlsx`, `.txt`, `.csv`) | [`R/5/Exp5_Importing_Data_Files.R`](R/5/Exp5_Importing_Data_Files.R) |
| **6** | WAP to compute the mean, median and mode of a given numerical vector data | [`R/Exp6_Mean_Median_Mode.R`](R/Exp6_Mean_Median_Mode.R) |
| **7** | WAP to create basic plots (scatter and bar graph) using `ggplot2` | [`R/Exp7_Ggplot2_Visualizations.R`](R/Exp7_Ggplot2_Visualizations.R) |
| **7 (Ext)** | Advanced Data Visualizations with `ggplot2` (scatter, bar, line, histogram, box plot) | [`R/Exp7b_Ggplot2_Data_Visualizations.R`](R/Exp7b_Ggplot2_Data_Visualizations.R) |
| **8** | WAP to perform linear regression and numeric correlation analysis between two variables | [`R/Exp8_Linear_Regression_Correlation.R`](R/Exp8_Linear_Regression_Correlation.R) |
| **9** | To draw a bar chart, box plot, pie chart, dot plot and scatter plot | [`R/Exp9_Base_R_Statistical_Plots.R`](R/Exp9_Base_R_Statistical_Plots.R) |

*Data files associated with R experiments are in [`R/5/`](R/5/) (`data.csv`, `data.txt`, `data.xlsx`) and [`R/students.csv`](R/students.csv).*

---

### 3. Machine Learning & Data Science Practicals (ML & DSP)

| Topic / Experiment | File Path |
|:---|:---|
| Python Basics, Strings, Lists, Tuples, Dictionaries, Sets | [`DSP/1.py`](DSP/1.py), [`DSP/2.py`](DSP/2.py), [`ML/1.py`](ML/1.py) |
| Object-Oriented Programming (Abstraction, Encapsulation, Inheritance) | [`DSP/3.py`](DSP/3.py) |
| Data Processing & Aggregations | [`DSP/4.py`](DSP/4.py) |
| Data Preprocessing on Titanic Dataset | [`ML/4/Experiment_4_Titanic_Preprocessing.ipynb`](ML/4/Experiment_4_Titanic_Preprocessing.ipynb) |
| Data Visualization with Seaborn | [`ML/5/Experiment_5_Titanic_Seaborn.ipynb`](ML/5/Experiment_5_Titanic_Seaborn.ipynb) |
| Linear Regression on Placement Dataset | [`ML/7/7Linear_Regression_Placement.ipynb`](ML/7/7Linear_Regression_Placement.ipynb) |
| Naive Bayes Classifier on Mushroom Dataset | [`ML/Practical_9_Naive_Bayes_Mushroom.ipynb`](ML/Practical_9_Naive_Bayes_Mushroom.ipynb) |
| K-Means Clustering on Wine Dataset | [`ML/Practical_11_KMeans_Wine_Dataset.ipynb`](ML/Practical_11_KMeans_Wine_Dataset.ipynb) |
| ID3 Decision Tree on Play Tennis Dataset | [`ML/ML_Practical_12_ID3_Play_Tennis_Updated.ipynb`](ML/ML_Practical_12_ID3_Play_Tennis_Updated.ipynb) |
| K-Nearest Neighbors (KNN) on Iris Dataset | [`ML/ML_Practical_13_KNN_Iris.ipynb`](ML/ML_Practical_13_KNN_Iris.ipynb) |
| Stock Price Prediction (NIFTY 50) | [`ML/ML_Practical_14_NIFTY_50_Stock_Prediction.ipynb`](ML/ML_Practical_14_NIFTY_50_Stock_Prediction.ipynb) |
| Recommendation System | [`ML/ML_Practical_15_Movie_Recommendation_System.ipynb`](ML/ML_Practical_15_Movie_Recommendation_System.ipynb) |

---

## 🛠 Compilation and Execution Guides

### C / C++ (DAA)
Compile any C/C++ program using `gcc` or `g++`:
```bash
# Example for Exp 1:
gcc DAA/Exp1_Sorting_Time_Complexity.c -o Exp1
./Exp1

# Example for Exp 12 (C++):
g++ DAA/Exp12_Optimal_Binary_Search_Tree.cpp -o Exp12
./Exp12
```

### R Scripts
Run directly via R or Rscript:
```bash
Rscript R/Exp1a_Basics_Data_Types.R
Rscript R/Exp6_Mean_Median_Mode.R
```
