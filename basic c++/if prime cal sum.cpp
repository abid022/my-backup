#include <bits/stdc++.h>

using namespace std;

bool prime(int n) {
    bool prime =true;
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
            break;
        }
        return true;
    }

}

int input(int n) {
    int sum = 0;
    if ( prime(n)) {
        for (int i = 2; i <= n; i++) {
            sum += i;
        }
        return sum;
    }
    else {
        cout << "not prime" << endl;
        return 0;
    }



}
int main() {
    int n = 17;
    cout << input(n) << endl;

}