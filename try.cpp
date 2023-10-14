#include <iostream>
#include <string>

using namespace std;

// Function to find the character at position 'pos' in string S
char findCharInS(const string& s1, long long pos) {
    long long i = 0; // Initialize the index for s1
    long long len_s1 = s1.length();

    while (i < len_s1) {
        // Calculate the length of the current si
        long long si_len = len_s1 - i;

        // If 'pos' is within the length of si, return the character at 'pos' in si
        if (pos <= si_len) {
            return s1[i + pos - 1];
        }

        // Move to the next character in s1
        pos -= si_len;
        i++;
    }

    return ' '; // Return a space (shouldn't be reached)
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s1;
        long long pos;

        cin >> s1 >> pos;

        // Find and print the character at position 'pos' in string S
        char result = findCharInS(s1, pos);
        cout << result;
    }

    cout << endl; // Print a newline after all test cases are processed

    return 0;
}
