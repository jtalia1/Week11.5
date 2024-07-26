// Week 11
// Jenna Stone
// CIS 1202 201
// July 26th, 2024

#include <iostream> 
#include "character.h"

using namespace std;

int main() {
    try {
        // Test cases with descriptive results
        cout << "Testing character function with 'A' and offset 3..." << endl;
        cout << "Result: " << character('A', 3) << endl; // Expected: 'D'

        cout << "Testing character function with 'a' and offset -1..." << endl;
        cout << "Result: " << character('a', -1) << endl; // Expected: 'z'

        cout << "Testing character function with 'Z' and offset 1..." << endl;
        cout << "Result: " << character('Z', 1) << endl; // Expected: 'A'

        cout << "Testing character function with 'z' and offset 26..." << endl;
        cout << "Result: " << character('z', 26) << endl; // Expected: 'z'

        cout << "Testing character function with 'A' and offset 32..." << endl;
        // This should throw an exception due to case transition
        cout << "Result: " << character('A', 32) << endl;
    }
    catch (const invalidCharacterException& e) {
        // Handle the case where the start character is invalid
        cerr << e.what() << endl;
    }
    catch (const invalidRangeException& e) {
        // Handle the case where the resulting character is invalid
        cerr << e.what() << endl;
    }
    catch (const exception& e) {
        // Handle any other unexpected exceptions
        cerr << "Something went wrong: " << e.what() << endl;
    }

    return 0;
}
