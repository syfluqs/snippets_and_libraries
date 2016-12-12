#include <bits/stdc++.h>

using namespace std;

bool isprime(int i,vector<int> &primes) {
    for (int j=1;j<primes.size();j++) {
        if (i%primes[j]==0) {
            return false;
        }
    }
    return true;
}

void populateprimes(vector<int> &primes, int limit) {
    int i,j;
    //cout << "limit is " << limit << endl;
    for (i=10,j=31;i<limit;i++,j=j+2) {
        if (!isprime(j, primes)) {
            i--;
        } else {
            //cout << "pushing " << j << endl;
            primes.push_back(j);
        }
    }
}

int main(){
    int t;
    cin >> t;
    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    vector<int> inputs;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        inputs.push_back(n);
    }
    int limit = *max_element(inputs.begin(),inputs.end());
    populateprimes(primes, limit);
    for (int a0=0;a0<t;a0++) {
        cout << primes[inputs[a0]-1] << endl;
    }
    return 0;
}
