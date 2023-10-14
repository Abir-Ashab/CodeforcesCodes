#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unsigned long long seed = 1;
    unsigned long long state = seed;
    const unsigned long long multiplier = 1664525ULL;
    const unsigned long long increment = 1013904223ULL;
    const unsigned long long modulus = 4294967296ULL; // 2^32

    cout << "Random integers:" << endl;
    for (int i = 0; i < 10; i++) {
        state = (multiplier * state + increment) % modulus; //linear congruential formula 
        int randomInt = static_cast<int>(state % 100); // Generates random integers between 0 and 99
        cout << randomInt << " ";
    }
    cout << endl;

    cout << "Random floats:" << endl;
    state = seed; // Reset the state
    for (int i = 0; i < 10; i++) {
        state = (multiplier * state + increment) % modulus;
        float randomFloat = static_cast<float>(state) / modulus; // Generates random floats between 0 and 1
        cout << randomFloat << " ";
    }
    cout << endl;

    return 0;
}