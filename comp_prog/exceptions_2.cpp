#include <iostream>

using namespace std;


int main(){
    string S;
    cin >> S;
    try {
    int n = stoi(S);
    cout << n << endl;
    } catch (invalid_argument a) {
        cout << "Bad String" << endl;
    }
    return 0;
}

/*
Stanard Exceptions:

image : ./cpp_exceptions.jpg

C++ provides a list of standard exceptions defined in <exception> 
which we can use in our programs.

Exception               Description
=========================================================================
std::exception          An exception and parent class of all the standard 
                        C++ exceptions.
std::bad_alloc          This can be thrown by new.
std::bad_cast           This can be thrown by dynamic_cast.
std::bad_exception      This is useful device to handle unexpected 
                        exceptions in a C++ program
std::bad_typeid         This can be thrown by typeid.
std::logic_error        An exception that theoretically can be detected 
                        by reading the code.
std::domain_error       This is an exception thrown when a mathematically 
                        invalid domain is used
std::invalid_argument   This is thrown due to invalid arguments.
std::length_error       This is thrown when a too big std::string is 
                        created
std::out_of_range       This can be thrown by the at method from for 
                        example a std::vector and 
                        std::bitset<>::operator[]().
std::runtime_error      An exception that theoretically can not be 
                        detected by reading the code.
std::overflow_error     This is thrown if a mathematical overflow occurs.
std::range_error        This is occured when you try to store a value 
                        which is out of range.
std::underflow_error    This is thrown if a mathematical underflow occurs.
 */