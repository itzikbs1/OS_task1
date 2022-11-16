# OS_task1

_By: Itzik Ben Shushan and Gal Cohen._

These are the solutions for assignment 1 in the operating systems courese in C language

## Introduction : 
We implemented each file for each question:

•	**_`cmp.c:`_** Implementation of the function which compares the files.

 __How to run__:
 
   ```
  ./cmp file_1 file_2
  ```

•	**_`copy.c:`_** Implementation of the function that copies between one file and the other.

If you put _-l_ and the files are normal files, a normal copy of the file's contents. If the file is a link symbol then copying is done.
If you don't put -l the copy is a normal copy of the file contents.

 __How to run__:
 
 copy contents of file_1 to file_2:
 
   ```
  ./copy -l file_1 file_2 
  ```
  __or__
  
   ```
  ./copy file_1 file_2 
  ```
  copy symbol link to file_2 (if file1link is a symbol link) :
  
    ```
  ./copy -l file1link file_2 
  ```
  

•	**_`encode.c:`_** The implementation of the 'main' which links the various encode functions.

•	**_`decode.c:`_** The implementation of the 'main' which links the various decode functions.

•	**_`codec1.c:`_** Implementation of the encode and decode functions which transfer the string from lowercase to uppercase and vice versa.
How to run:

•	**_`codec2.c:`_**

•	**_`codec.h:`_** Concentration of the details of the functions for codec2.c and codec1.c files
