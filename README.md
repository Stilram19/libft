# 42_LIBFT

This project provides a library of re-implemented 43 functions from the C standard library.
It is the first project in 42-cursus.
This is the [subject](https://cdn.intra.42.fr/pdf/pdf/117032/en.subject.pdf)

# my_42_project

![](/images/my_project.png)

## Installation and Usage

To use the library in your c projects, follow these steps:

1. Clone the repository to your local machine:

   ```bash
   git clone git@github.com:Stilram19/libft.git
   ```

2. Navigate to the repository's directory:

    ```bash
    cd libft
    ```

3. Compile the source code to create the static library:

    ```bash
    make && make clean
    ```
make will compile all source files having the functions implementations.

make clean will delete all unnececessary object files, and will only keep libft.a (our archive).

4. Include the libft header file into your project's source code (libft.h has all the prototypes to the implemented functions and the data structures):

    ```c
    # include "/path/to/libft.h"
    ```

replace the /path/to with the path of the libft.h file.
You'll be able now to use the functions in your code. If your using vscode and don't now how to use a function, i made a brief description for every function, you just have to put the mouse on the name of the function
and vscode will show you the brief description.

Here is an example:

![](/images/brief_description.png)

5. Link the library during compilation:

```bash
gcc -o my_program my_program.c -L/path/to/libft -lft
```
replace /path/to/libft with the path of libft.a,
and my_program with your program name.

## Concepts you cannot do without (for students):

[pointers](https://en.wikipedia.org/wiki/Pointer_(computer_programming))  
[Endianness](https://en.wikipedia.org/wiki/Endianness)  
[Pointer arithmetic](https://www.geeksforgeeks.org/pointer-arithmetics-in-c-with-examples/)  
[two's complement](https://en.wikipedia.org/wiki/Two%27s_complement)    
[integer promotion](https://www.geeksforgeeks.org/integer-promotions-in-c/)
