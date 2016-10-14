#include <exception>
#include <stdexcept>

using namespace std;

class my_exception : public exception {
    virtual const char* what() {
        return "my_exception occured";
    }
};

int main(int argc, char const *argv[])
{
    my_exception myex;
    int a=0;
    if (a==0) {
        throw myex;
    }
    return 0;
}

/*
    virtual const char* what() {
~~~~^

The virtual keyword is used to appply polymorphism to the derived class'
method. Without it, the derived class function will work but it will 
only hide the base class function. Also, if the function in base class
is virtual, it propagates through hierarchy and need not be set 
virtual again. The STL exception is already virtual. But, specify 
virtual for documentation purposes.

A throw() specifier can also be added, like

    virtual const char* what() const throws() {
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^

This only works for microsoft compilers. This means that the overriding 
function what() will not throw any exception, so the compiler can 
optimize the function. This is depreceted.

So we now have just three non-deprecated forms:

void foo() ; // might throw anything

void bar() noexcept ; // will never throw

void baz( T a ) noexcept( sizeof(T) < 100 )
// note: this must be a constexpr  
// will never throw if size of T is less than 101, might throw anything otherwise. 

In addition, C-library functions are deemed to be noexcept. 
 */