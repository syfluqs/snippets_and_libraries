#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

void printVector(vector<int> vec) {
    for (int i=0; i<vec.size(); i++) {
        cout << vec[i] << " " ;
    }
    cout << endl;
}

void insertionSort(vector <int>  ar) {
    int a = ar[ar.size()-1];
    for (int i=ar.size()-1; i>0 ;i--) {
        if (ar[i-1]>a) {
            ar[i]=ar[i-1];
            printVector(ar);
        } else {
            ar[i]=a;
            printVector(ar);
            return;
        }
    }
    ar[0]=a;
    printVector(ar);
}
int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

    insertionSort(_ar);
    return 0;
}
