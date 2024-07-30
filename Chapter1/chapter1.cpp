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


// 1.2 Comments
A comment is a programmer-readable note that is inserted directly into the source code of the program. 
Comments are ignored by the compiler and are for the programmer’s use only.

//Single Line comment

/*
Multi 
Line 
Comment
*/

// You can comment or uncomment a selection by pressing ctrl-/.

// In VS Code