#include <iostream>
'''
#include preprocessor directive indicates that we would like to use the 
contents of the iostream library, 
which is the part of the C++ standard library that allows us to 
read and write text from/to the console.
'''

int main() "Function whose name is main()"
{

std::cout<<"Hello, World!";  "Charachter Outpur cout with << operator"
return 0;
'''
This is a return statement. 
When an executable program finishes running, 
the program sends a value back to the operating system in order to indicate whether it ran successfully or not. 
This particular return statement returns the value 0 to the operating system,
 which means “everything went okay!”. 
 This is the last statement in the program that executes.
'''
}
