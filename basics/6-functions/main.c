/**
 * Function creation and usage example
 * by Konsta Siekkeli
 */

#include <iostream>

/**
 * First about function anatomy
 * 
 *      int example_function (char* arg1, int arg2, ...);
 *       ^                           ^___ <function parameter list>
 *       ^___ <function return type>
 * 
 *      <returntype> example_function (<parameters>)
 * 
 * ---------------------------------------------------------------------------
 * 
 *  Function returntype type is used to select what type of values the 
 *  function shoudl return (int, char, string, float, etc...).
 *  Function can return only one value with specified datatype.
 *  Returntype can also be a pointer
 * 
 *  Parameters are used for passing values to fuction.
 *  There is no limit to how many parameters can be defined to function.
 *  Like retuntype also parameters can be pointers. This can be used to 
 *  return more values from the function.
 */

// Lets declare few functions

// Void as param makes sure that the function doesn't take any value as param.
// passing value for this function causes error.
void print_hello(void);

// When declaring function the arg names are not needed
int multiply(int, int);

int main()
{
    print_hello(); // When function is defined and declared it can be called
    // print_hello("This causes error");

    int return_value

    return 0;
}

// defining the functions

// Void type functions doedn't return a type. So return is not needed
void print_hello(void)
{
    std::cout << "Hello, world!" << std::endl;

    // But it can be still used to exit the function in the middle of execution
    return;

    std::cout << "This is never printed, because of return" << std::endl;
}

// When defining the function argument names needs to be given
int multiply(int first_arg, int second_arg)
{
    // Because function have defined return type 
    // it needs to return a value that is type int
    return first_arg * second_arg;
}