# FILE-HANDLING-PROGRAM

*COMPANY*:  CODTECH IT SOLUTIONS

*NAME*: YASH JAIN

*INTERN_ID*: CT06DG3399

*DOMAIN*: C PROGRAMMING

*DURATON*: 6 WEEKS

*MENTOR*: NEELA SANTOSH

*DESCRIPTION*:
I have performed the task titled "File Handling Program" in the C programming language, which demonstrates  fundamental file handling operations such as file creation, data writing, reading, and appending using the standard C library (stdio.h and stdlib.h), which provide the necessary functions for handling files efficiently.
It simulates a basic use-case where user information is collected including ID, name, domain, college name, company name, and job type. All this information is then stored and managed within a text file named task1.txt.
This task can be implemented and tested in Local Desktop Environment.

Objective of the Program:
1. Create a new text file using the standard C file handling functions.
2. Accept basic user details from console.
3. Write the collected data into the text file using write mode ("w").
4. Reopen the file to read in read mode ("r") and display the stored data.
5. Reopen the file in append mode("a") to add additional details without overwriting existing data.
6. Handle files safely by checking for errors and closing each file properly using fclose().

Tools and Technologies Used:
1. Programming Language: C
2. Standard Libraries Used:
   -> <stdio.h>: Provides file handling functions like fopen(), fprintf(), fscanf(), fclose(),         printf(), and scanf().
   -> <stdlib.h>: Included for additional utility functions and safe exit handling.
4. Compiler: GCC (GNU Compiler Collection)
5.  Editor Platform: Code Blocks

 Program Summary:
1. Create a file name task1.txt using fopen() function in write ("w") mode.
2. Write the data in the file using "fprintf" function which is collected through the console.
3. Close the file using 'fclose()' function', to ensure the data is saved and no memory leaks occur.
4. Now reopen the file in 'read(r) mode' to read the data from the file on the screen using "fscanf()" function.
5. Again close the file using 'fclose()' function'
6. Again reopen the file but in 'append(a) mode' to add the new data to the file without erasing previously existing(or written) data.
7. Write the data to be input using anothe 'fprintf()' function.
8. Print the data in the file using "fprintf" function.
9. Close the file using 'fclose()' function'

*OUTPUT*:
![Image](https://github.com/user-attachments/assets/3bcba323-3537-42ad-a298-ede4a979584b)
![Image](https://github.com/user-attachments/assets/6c6a6ea7-59b5-4440-b817-4bf2085245bc)
