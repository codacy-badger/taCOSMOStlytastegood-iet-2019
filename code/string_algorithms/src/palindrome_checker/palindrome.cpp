#include "palindrome.hpp"

using namespace std;

// Part of Cosmos by OpenGenus Foundation
bool isPalindromeRecursive(string input)
{
    if (input.begin() >= (input.end() - 1))
        return true;
    if (*input.begin() != *(input.end() - 1))
        return false;
    return isPalindromeRecursive(string(++input.begin(), --input.end())); // Check if the substring created by removing a character
                                                                          // is also a palindrome
}

bool isPalindromeReverse(string input)
{
    return input == string(input.rbegin(), input.rend()); // Check if the string is equal to its reverse
}

bool isPalindromeIterative(string input)
{
    int start = 0;
    int end = input.length() - 1;
    while (start < end)
        if (input[start++] != input[end--])
            return false;
    return true;
}