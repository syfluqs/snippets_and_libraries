/*
 * in C, static functions are visible only within one translation unit.
 * in C++, static member functions (or static data members of a class), are 
 * the class variables, i.e. they are common for all instances of that class
 * or belong to the entire class, as opposed to instance variables that are 
 * common only to one instance.
 * 
 * Non-static member functions can access all data members of the class: 
 * static and non-static. Static member functions can only operate on the 
 * static data members.
 */