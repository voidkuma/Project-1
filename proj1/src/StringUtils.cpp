#include "StringUtils.h"
#include <cstring> 
#include <cctype>

namespace StringUtils{

// Assignment = Returns a substring of the string str, allows for negative values as in
// python end == 0 means to include end of string
std::string Slice(const std::string &str, ssize_t start, ssize_t end) noexcept{
    // Replace code here

#include <string>

std::string Slice(const std::string &str, ssize_t start, ssize_t end) noexcept {
    ssize_t len = str.size();

    // Adjust negative indices
    if (start < 0) start += len;
    if (end < 0) end += len;

    if (start < 0) start = 0;
    if (end == 0) end = len; 
    if (end > len) end = len;
    if (start >= end) return ""; // Empty string if start >= end

    return str.substr(start, end - start);
}
//     std::string first = str;
//     std::string second = str;
//     std::string result = "";
    
//     //
//     for (int i = 0; (i < start); i++){ 
//     result += first[i]; 
//     }
//     //
//     for (int i = 0; (i < end); i++){ 
//     result += second[i]; 
//     }

//     return str;
// }

// Assignment: Returns the capitalized string as in python
std::string Capitalize(const std::string &str) noexcept{

    if (str.empty()) { // Checking if the string is empty
        return str; // if empty it returns the string back
    }

    std::string reult = str;  // capital_result will be the string with the first letter capitalized.

    if (std::islower(reult[0])) { // Checks if the first letter is capitalized
        reult[0] = std::toupper(reult[0]); // if so it makes the first letter capital
    }

    return reult;
}

// Assignment: Returns the upper-case strings as in python
// Status: worked on
std::string Upper(const std::string &str) noexcept{

    if (str.empty()) { // Checking if the string is empty
        return str; // if empty it returns the string back
    }
    
    std::string result = str; // Creates a copy to modify

    for (int i = 0; (i < result.size()); i++){ // Iterates through each character in the string
        result[i] = std::toupper(result[i]); // Makes each character upper case
    }

    return result; // return the result
}

// Assignment: Returns the lower-case strings as in python
// Status: worked on
std::string Lower(const std::string &str) noexcept{

    if (str.empty()) { // Checking if the string is empty
        return str; // if empty it returns the string back
    }
    
    std::string result = str; // Creates a copy to modify

    for (int i = 0; (i < result.size()); i++){ // Iterates through each character in the string
        result[i] = std::tolower(result[i]); // Makes each character lower case
    }

    return result; // return the result
}

std::string LStrip(const std::string &str) noexcept{

    if (str.empty()) { // Checking if the string is empty
        return str; // if empty it returns the string back
    }

    return "";
}

std::string RStrip(const std::string &str) noexcept{

    if (str.empty()) { // Checking if the string is empty
        return str; // if empty it returns the string back
    }

    return "";
}

std::string Strip(const std::string &str) noexcept{

    if (str.empty()) { // Checking if the string is empty
        return str; // if empty it returns the string back
    }

    return "";
}

std::string Center(const std::string &str, int width, char fill) noexcept{

    if (str.empty()) { // Checking if the string is empty
        return str; // if empty it returns the string back
    }

    return "";
}

std::string LJust(const std::string &str, int width, char fill) noexcept{

    if (str.empty()) { // Checking if the string is empty
        return str; // if empty it returns the string back
    }

    return "";
}

std::string RJust(const std::string &str, int width, char fill) noexcept{

    if (str.empty()) { // Checking if the string is empty
        return str; // if empty it returns the string back
    }

    return "";
}

std::string Replace(const std::string &str, const std::string &old, const std::string &rep) noexcept{
    
    if (str.empty()) { // Checking if the string is empty
        return str; // if empty it returns the string back
    }

    return "";
}

std::vector< std::string > Split(const std::string &str, const std::string &splt) noexcept{
    // Replace code here
    return {};
}

std::string Join(const std::string &str, const std::vector< std::string > &vect) noexcept{
    // Replace code here
    return "";
}

std::string ExpandTabs(const std::string &str, int tabsize) noexcept{
    // Replace code here
    return "";
}

int EditDistance(const std::string &left, const std::string &right, bool ignorecase) noexcept{
    // Replace code here
    return 0;
}

};