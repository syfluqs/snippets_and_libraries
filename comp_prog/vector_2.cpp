#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> a) {
    if (a.empty())
        return;
    int i=0;
    for (i=0;i<a.size()-1;i++) {
        cout << a[i] << ", ";
    }
    cout << a[i] << endl;
    return;
}

int main(int argc, char const *argv[])
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    printVector(v);
    v.begin();
    v.push_back(4);
    printVector(v);
    v.erase();
    printVector(v);
    return 0;
}