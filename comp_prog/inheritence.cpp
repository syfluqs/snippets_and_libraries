#include <iostream>

using namespace std;

class human {
private:
    int field;
public:
    human(int field) : field(field) {
        cout << "constructor of human called with value " << field << endl;
    }
    int getField() {
        cout << "value of field is " << field << endl;
        return field;
    }
};

class child : public human {
private:
    int age;
public:
    child(int field,int age) : human(field),age(age) {
        cout << "constructor for child called with value " << field << " and age " << age  << "." << endl;
    }
    int getAge() {
        cout << "Age of child is " << age << endl;
        return age;
    }
};

int main(int argc, char const *argv[])
{
    human A = human(2);
    A.getField();
    cout << "===============================" << endl;
    child B = child(2,3);
    B.getAge();
    B.getField();
    return 0;
}

/*
Here, the child class inherits the field attribute from the human class.
The line 
    human(int field) : field(field) 
defines the constructor for human class with an initialisation list of field.
This can also be done as 
    human(int field) {
        this -> field = field;
        ~~~~~~~~^
        cout << "constructor of human called with value " << field << endl;
    }
The this pointer refers to the invoking object. It is implicit for all classes.
Only member functions have this pointer, not friend functions as they are not 
members of a class.
For the child class, we can not use the form mentioned above for initialising 
fields from parent class as they belong to the parent class and are private to it.
Also, if the fields were const or referenced it would mean that we defined
them twice which is inefficient.
So, for the child class we call the constructor function (apart from the default 
constructor) like,
    child(int field,int age) : human(field),age(age)
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~^

A C++ class can inherit members from more than one class and here is the 
extended syntax:
    class derived-class: access baseA, access baseB....
    ~~~~~~~~~~~~~~~~~~~~~^

Type of Inheritance:
When deriving a class from a base class, the base class may be inherited through 
public, protected or private inheritance. The type of inheritance is specified by 
the access-specifier like public, private and protected.
We hardly use protected or private inheritance, but public inheritance is commonly 
used. While using different type of inheritance, following rules are applied:

-> Public Inheritance: When deriving a class from a public base class, public 
members of the base class become public members of the derived class and protected 
members of the base class become protected members of the derived class. A base 
class's private members are never accessible directly from a derived class, but can 
be accessed through calls to the public and protected members of the base class.

-> Protected Inheritance: When deriving from a protected base class, public and 
protected members of the base class become protected members of the derived class.

-> Private Inheritance: When deriving from a private base class, public and protected 
members of the base class become private members of the derived class.
 */