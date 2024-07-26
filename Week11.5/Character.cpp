// Week 11
// Jenna Stone
// CIS 1202 201
// July 26th, 2024

#include "character.h"
#include <cctype>      // For isalpha() and islower()

using namespace std;

// Calculate the character after applying the offset
char character(char start, int offset) {
    // Ensure start character is a valid letter
    if (!isalpha(start)) {
        throw invalidCharacterException("Oops! The start character isn't a letter.");
    }

    // Determine if start character is lowercase or uppercase
    char base = islower(start) ? 'a' : 'A';

    // Calculate new position of the character in the alphabet
    int newChar = (start - base + offset) % 26;

    // Adjust for negative offsets
    if (newChar < 0) {
        newChar += 26;
    }

    // Calculate resulting character
    char result = base + newChar;

    // Make sure the result is a valid letter
    if (!isalpha(result)) {
        throw invalidRangeException("Hmm, the resulting character isn't a letter.");
    }

    return result;
}