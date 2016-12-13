#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

// sieve of eratosthenes
// 
// optimised version where even numbers are completely
// neglected from the start

void printArr(int ar_size, bool * ar) {
    for (int i=3;i<ar_size;i+=2) {
        if (ar[i])
        cout << i << " " ;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    bool list[n];
    fill_n(list,n,true);
    int lim = (int) sqrt(n);
    //cout << "n=" << n << endl;
    //cout << "lim=" << lim << endl;
    for (int i=3;i<=lim;i+=2) {
      if (list[i]) {
      for (int j=i*i;j<=n;j+=i) {
        //cout << j << " ";
        list[j] = false;
      }
      }
    }
    printArr(n, list);
}