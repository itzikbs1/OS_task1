# OS_task1

_By: Itzik Ben Shushan and Gal Cohen._

These are the solutions for assignment 1 in the operating systems courese in C language

## Introduction : 
We implemented each file for each question:

•	**_`cmp.c:`_** Implementation of the function which compares the files - Question 1.

   **How to run**:

   ```
    ./cmp file_1 file_2
   ```
   ![צילום מסך 2022-11-20 152238](https://user-images.githubusercontent.com/92460450/202904453-e2ced6ee-ebdf-4db9-a083-0e7b0a8f4e3f.jpg)

   ![צילום מסך 2022-11-20 152153](https://user-images.githubusercontent.com/92460450/202904478-135f2db5-ca69-4a3e-8e7c-5bab0f96e90f.jpg)


•	**_`copy.c:`_** Implementation of the function that copies between one file and the other.

If you put _-l_ and the files are normal files, a normal copy of the file's contents. If the file is a link symbol then copying is done.
If you don't put -l the copy is a normal copy of the file contents.

**How to run**:

 copy contents of file_1 to file_2 - Question 2:

  ```
  ./copy -l file_1 file_2 
  ```
   **or**

  ```
  ./copy file_1 file_2
  ```
  
copy symbol link to file_2 (if file1link is a symbol link) - Question 3:

   ```
  ./copy file1link file_2 
   ```
   
As a result of this run, the file file_2 will have the name of the file to which the link symbol points.


•	**_`encode.c:`_** The implementation of the 'main' which links the various encode functions.

•	**_`decode.c:`_** The implementation of the 'main' which links the various decode functions.

•	**_`codec1.c:`_** Implementation of the encode and decode functions which transfer the string from lowercase to uppercase and vice versa - Question 4a.


**How to run**:

if encode:

  ```
  ./encode codec1 "gal and itzik"

  ```
if decode:

```
./decode codec1 "gal and itzik"
```

•	**_`codec2.c:`_** - Question 4b 

**How to run**:

if encode:

 ```
./encode codec2 "ANC"

 ```
 if decode:

 ```
./decode codec2 "a"
  
  ```

•	**_`codec.h:`_** Concentration of the details of the functions for codec2.c and codec1.c files
