/*input
4 7 10
2 6 18
0 0 0
*/

#include <iostream>
#include <math>
using namespace std;

int main() {
    
    int a=0,b=0,c=0;
    cin >> a >> b >> c;
    while (a!=0 && b!=0 && c!=0) {
        if (b==(a+c)/2) {
            int d = b-a;
            cout << "AP " << a+(3*d) << endl;
        } else if (b==math.pow(a*c,0.5)) {
            int r = b/a;
            cout << "GP " << a*math.pow(r,3) << endl;
        } else {
            cout << "invalid" << endl;
        }
        cin >> a >> b >> c;
    }
    return 0;
}