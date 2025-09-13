#include <iostream>
#include <vector>

using namespace std;

int countPrimes(int n) {
    vector<bool> v(n + 1, true);
    int count = 0;
    v[0] = v[1] = false;
    for (int i = 2; i < n; i++) {
        if (v[i]) {
            count++;
            for (int j = i * 2; j < n; j += i) {
                v[j] = false;
            }
        }
    }
    return count;
}

int main() {
    int n = 10;
    int primeCount = countPrimes(n);
    cout << "The number of prime numbers less than " << n << " is: " << primeCount << endl;
    return 0;
}
