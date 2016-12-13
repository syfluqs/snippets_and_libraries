#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

// sieve of eratosthenes

void printArr(int ar_size, bool * ar) {
    for (int i=2;i<ar_size;i++) {
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
    for (int i=2;i<=lim;i++) {
      if (list[i]) {
      for (int j=i*i;j<=n;j+=i) {
        //cout << j << " ";
        list[j] = false;
      }
      }
    }
    printArr(n, list);
}