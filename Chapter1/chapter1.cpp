#include <iostream>
/*
#include preprocessor directive indicates that we would like to use the 
contents of the iostream library, 
which is the part of the C++ standard library that allows us to 
read and write text from/to the console.
*/

int main()  // Function whose name is main()
{

std::cout<<"Hello, World!";  // "Charachter Outpur cout with << operator"
return 0;

/*
This is a return statement. 
When an executable program finishes running, 
the program sends a value back to the operating system in order to indicate whether it ran successfully or not. 
This particular return statement returns the value 0 to the operating system,
 which means everything went okay!. 
 This is the last statement in the program that executes.
*/

}

//-----------------------------------------------------------------//
// 1.2 Comments

/*
A comment is a programmer-readable note that is inserted directly into the source code of the program. 
Comments are ignored by the compiler and are for the programmer’s use only.
*/

//Single Line comment

/*
Multi 
Line 
Comment
*/

// You can comment or uncomment a selection by pressing ctrl-/.

// In VS Code


//------------------------------------------------------------//
// 1.3 Objects and Variables

/*
In C++, direct memory access is discouraged
An object is a region of storage (usually memory) that can store a value
An object with a name is called a variable.

int x; // define a variable named x, of type int
int a, b;

// correct and recommended (easier to read)
int a;
double b;

*/

#include <iostream>

int main()  
{
int a;         // no initializer (default initialization)
int b = 5;     // initial value after equals sign (copy initialization)
int c( 6 );    // initial value in parenthesis (direct initialization)

// List initialization methods (C++11) (preferred)
int d { 7 };   // initial value in braces (direct list initialization)
int e = { 8 }; // initial value in braces after equals sign (copy list initialization)
int f {};      // initializer is empty braces (value initialization)

std::cout<<"Enter two Numbers: ";
int x{};
int y{};
std::cin>>x;
std::cout<<"Number entered is : "<<x<<" AND "<<y<<std::endl;
std::cout<<"Answers: 	"<<a<<b<<c<<d<<e<<f;  
return 0;

}


#include <iostream>

int main()  
{

//create a program that asks the user to enter an integer, waits for them to input an integer, 
//then tells them what 2 times that number is.

std::cout<<"Enter any integer ";
int mul{};
std::cin>>mul;
std::cout<<"The Multiplied by 2 is : "<<mul*2<<std::endl;

return 0;

}



//Prefer \n over std::endl

