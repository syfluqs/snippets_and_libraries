#include <queue>
#include <iostream>

using namespace std;

void printQueue(queue<int> a) {
    while (a.size()!=1) {
        cout << a.front() << ", ";
        a.pop();
    }
    cout << a.front() << endl;
}

int main(int argc, char const *argv[])
{
    queue<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    printQueue(a);
    a.push(4);
    printQueue(a);
    cout << a.back() << endl;
    return 0;
}

/*
Queue (FIFO structures)
based on deque implementation


Member functions
(constructor)     Construct queue (public member function )
empty             Test whether container is empty (public member function )
size              Return size (public member function )
front             Access next element (public member function )
back              Access last element (public member function )
push              Insert element (public member function )
emplace           Construct and insert element (public member function )
pop               Remove next element (public member function )
swap              Swap contents (public member function )
 */