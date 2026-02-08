# C++ Cherno Series


## Basic cpp compile & run command
`g++ main.cpp Log.cpp -o main` : this compiles and links the objects    
`./main` : run command  
`g++ -c main.cpp` : this only compiles the code   
`g++ -E main.cpp > main.ii` : this runs until the preprocessing stage  
(-C for inlcude comments, -P for aoid line noises)  
`g++ -S main.cpp` : only compile the code, do not assemble or link  

## How C++ works

* The `#include` line is a preprocessing statement. That will be executed before the program gets complied.  
* `#include <iostream>` does copy the code from the iostream file (called header) to our source code file.
* `main()` is a special type of function, when we don't return anything it assumes we return 0. Returning 0 means program executed successfully.
* Only `.cpp` files get compiled. Header files added through include statements as preprocessing statements. (Header files contain the declarations)
* Every `.cpp` file gets compiled individualy  to a `.obj` file and then they are glued together by the linker.
* If t function `Log` in `main()` function, we have to say the compiler that there is a function called `Log` (declaration) then that gets compiled without any error (even without the function definition).
* When the `Log` function is defined and compiled in another file, while building the project linker links the function body to where the function is called, and makes the working executable .exe file.

## How C++ compiler works

* Text files -> compiling -> linking -> executable
* Compiler compiles text files into intermediate files in `.obj` format
* Compiler first process the preprocessing statements
* `#include` command does just copy the file content to the file we entered the include commans (simple example is in the Compiler folder)
- `#include <end>` this searches the file only in system include directories
- `#include "end.h"` this searches the file in currecnt directory then the include paths we specified then in system include directories.
* Preprcessing statements:
  * `#include`
  * `#define`
  * `#if` ... `#endif`
* Run `g++ -E main.cpp > main.ii` for run until preprocessing and save to a file (-C inlcue comments, -P avoid line noises; by convention .i for C and .ii for C++)
* Compiler is capable of generating optimised `.obj` files and much more.
* If there is a multiplication of constants like `5 * 2`, compiler does this calculation in compile time and put `10` in that place.
* If there is a funciton called and the return value is not stored anywhere then the compiler optimize it away from the code.
* `g++ -S main.cpp` for compile only, do not assmble or link