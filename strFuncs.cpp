#include "strFuncs.h"
#include <cctype>

using namespace std;


/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *
 * Palindromes are NOT case-sensitive - "RaCecaR" is a valid palindrome
 *


 *You should provide a recursive solution*/
bool helper(const string& s, int left, int right) {
    // Base case: If the pointers cross, it's a palindrome
    if (left >= right) {
        return true;
    }

    // Case-insensitive comparison
    if (tolower(s[left]) != tolower(s[right])) {
        return false;
    }

    // Recursive case: move inward
    return helper(s, left + 1, right - 1);
}

bool isPalindrome(const string s1) {
    return helper(s1, 0, s1.length() - 1);
}


