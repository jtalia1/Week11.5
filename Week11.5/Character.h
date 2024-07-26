// Week 11
// Jenna Stone
// CIS 1202 201
// July 26th, 2024

#pragma once
#ifndef CHARACTER_H
#define CHARACTER_H

#include <stdexcept>  // For std::runtime_error

namespace std {
    class runtime_error; // Forward declaration for exception handling
}

// Exception class for invalid start character
class invalidCharacterException : public std::runtime_error {
public:
    explicit invalidCharacterException(const std::string& message)
        : std::runtime_error(message) {}
};

// Exception class for invalid resulting character
class invalidRangeException : public std::runtime_error {
public:
    explicit invalidRangeException(const std::string& message)
        : std::runtime_error(message) {}
};

// Calculate resulting character based on start and offset
char character(char start, int offset);

#endif // CHARACTER_H
