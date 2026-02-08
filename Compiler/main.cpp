int mult(int a, int b) 
{
    int result = a * b;
    return result;
#include "endBrace.h"

// Above code gets compiled without any error
// since the #include command just copy and paste the include file content to this file

#if 0
int add(int a, int b) 
{
    return a + b;
}
#endif

// Above code is disabled, so preprocessing will erase this code 
// To run this upto preprocessing stage
// run g++ -E main.cpp > main.ii
// (-P for avoid line noises, -C for include comments)