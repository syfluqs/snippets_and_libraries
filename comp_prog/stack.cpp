#include <stack>
#include <iostream>

using namespace std;

void printstack(stack<int> a) {
    while (a.size()!=1) {
        cout << a.top() << ", ";
        a.pop();
    }
    cout << a.top() << endl;
}

int main(int argc, char const *argv[])
{
    stack<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    printstack(a);
    a.push(4);
    printstack(a);
    cout << a.top() << endl;
    return 0;
}

/*
stack (LIFO structures)
based on deque implementation


(constructor)     Construct stack (public member function )
empty             Test whether container is empty (public member function )
size              Return size (public member function )
top               Access next element (public member function )
push              Insert element (public member function )
emplace           Construct and insert element (public member function )
pop               Remove top element (public member function )
swap              Swap contents (public member function )
 */