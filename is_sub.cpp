#include <bits/stdc++.h>

using namespace std;

// Function to check if a string is a subsequence of another string
bool checkforSubsequence(string string2, string string1) {

    // We have to check if string2 is a subsequence of string1

    // Declaring a stack to insert the characters of the second string i.e., string1
    stack < char > checkstack;

    // Inserting all the characters of string1 into the stack
    for (int i = 0; i < string2.size(); i++) {
        checkstack.push(string2[i]);
    }

    // Initializing a variable to store the index of last character of string2
    int currentIndex = (string1.size() - 1);

    /* 
       Stop the while loop if either we have found all
       the elements of "string2" and "currentIndex" 
       becomes less than zero or the stack become empty
    */
    while (!checkstack.empty() && currentIndex >= 0) {

        if (checkstack.top() == string1[currentIndex]) {
            checkstack.pop();
        }
        currentIndex--;
    }

    /*
       If we have found all the characters of "string2", 
       then currentIndex will have become less than zero
    */
    if (checkstack.empty()) return true;
    else return false;

}

int main() {
    string string1 = "459";
    string string2 = "54";

    // Call the function to check is a string is a subsequence of another string
    bool isSubsequence = checkforSubsequence(string2, string1);

    if (isSubsequence) {
        cout << "Yes, \'" << string2 << "\' is a subsequence of \'" << string1 << "\'" << endl;
    } else {
        cout << "No, \'" << string2 << "\' is not a subsequence of \'" << string1 << "\'" << endl;
    }
    return 0;
}