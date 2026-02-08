# C++ Cherno Series


## Basic cpp compile & run command
g++ main.cpp Log.cpp -o main   
./main

## How C++ works

* The `#include` line is a preprocessing statement. That will be executed before the program gets complied.  
* `#include <iostream>` does copy the code from the iostream file (called header) to our source code file.
* `main()` is a special type of function, when we don't return anything it assumes we return 0. Returning 0 means program executed successfully.
* Only `.cpp` files get compiled. Header files added through include statements as preprocessing statements. (Header files contain the declarations)
* Every `.cpp` file gets compiled individualy  to a `.obj` file and then they are glued together by the linker.
* If t function `Log` in `main()` function, we have to say the compiler that there is a function called `Log` (declaration) then that gets compiled without any error (even without the function definition).
* When the `Log` function is defined and compiled in another file, while building the project linker links the function body to where the function is called, and makes the working executable .exe file.