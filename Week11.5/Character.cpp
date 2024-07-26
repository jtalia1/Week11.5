// Week 11
// Jenna Stone
// CIS 1202 201
// July 26th, 2024

#include "character.h"
#include <cctype>      // For isalpha() and islower()

using namespace std;

// Function to calculate the character after applying the offset
char character(char start, int offset) {
    // Ensure the start character is a valid letter
    if (!isalpha(start)) {
        throw invalidCharacterException("Oops! The start character isn't a letter.");
    }

    // Determine if the start character is lowercase or uppercase
    char base = islower(start) ? 'a' : 'A';

    // Calculate new position of the character in the alphabet
    int newChar = (start - base + offset) % 26;

    // Adjust for negative offsets
    if (newChar < 0) {
        newChar += 26;
    }

    // Calculate resulting character
    char result = base + newChar;

    // Check if resulting character is in the same case as the start character
    if ((islower(start) && isupper(result)) || (isupper(start) && islower(result))) {
        throw invalidRangeException("Oops! The resulting character is in a different case.");
    }

    return result;
}