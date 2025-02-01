#include "StringUtils.h"
#include <cstring> 
#include <cctype>

namespace StringUtils{

// Assignment = Returns a substring of the string str, allows for negative values as in
// python end == 0 means to include end of string
std::string Slice(const std::string &str, ssize_t start, ssize_t end) noexcept{
    // Replace code here

    ssize_t length = str.size(); // length of the string
    
    if (start < 0){
        start += length; // Adjusting if for C++
    }
    if (end < 0){
        end += length; // Adjusting if for C++ 
    } 

    if (start < 0) start = 0;
    if (end == 0) end = length; 
    if (end > length) end = length;
    if (start >= end) return ""; 

    return str.substr(start, end - start);
}

// Assignment: Returns the capitalized string as in python
std::string Capitalize(const std::string &str) noexcept{

    if (str.empty()) { // Checking if the string is empty
        return str; // if empty it returns the string back
    }

    std::string result = str;  // capital_result will be the string with the first letter capitalized.

    for (int i = 0; (i < result.size()); i++){ // iterates through each character in the string
        result[i] = std::tolower(result[i]); // lowers each character
    }
    result[0] = std::toupper(result[0]); // Makes the first letter capital

    return result;
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

// Assignment: Returns the left stripped strings,
// (white space characters are removed from left, right or both).
std::string LStrip(const std::string &str) noexcept{

    if (str.empty()) { // Checking if the string is empty
        return str; // if empty it returns the string back
    }

    size_t first = 0; // first = the first actual character in the string, non-whitespace
    while (first < str.size() && std::isspace(static_cast<unsigned char>(str[first]))) {
        ++first; // Increments first by one very iteration, in order to find the first actual character
    }

    // Return the substring from the first non-whitespace character to the end
    return str.substr(first);
}

// Assignment: Returns the right stripped strings,
// (white space characters are removed from left, right or both).
std::string RStrip(const std::string &str) noexcept{

    if (str.empty()) { // Checking if the string is empty
        return str; // if empty it returns the string back
    }
    size_t last = str.size(); // last = last character in string
    while (last > 0 && std::isspace(static_cast<unsigned char>(str[last - 1]))) {
        --last;
    }

    // Return the substring from the beginning to the last non-whitespace character
    return str.substr(0, last);
}

// Assignment: Returns the both stripped strings,
// (white space characters are removed from left, right or both).
std::string Strip(const std::string &str) noexcept{

    if (str.empty()) { // Checking if the string is empty
        return str; // if empty it returns the string back
    }
    size_t last = str.size(); // last = last character in string
    while (last > 0 && std::isspace(static_cast<unsigned char>(str[last - 1]))) {
        --last;
    }
    size_t first = 0; // first = the first actual character in the string, non-whitespace
    while (first < str.size() && std::isspace(static_cast<unsigned char>(str[first]))) {
        ++first; // Increments first by one very iteration, in order to find the first actual character
    }

    return str.substr(first, last - first);
}
//Assignment: Returns the center/left/right justified strings
// width = width of the whole string essentially the length of how it should be
// fill = the character to fill the space with
// str = well, its just the string lol
std::string Center(const std::string &str, int width, char fill) noexcept{

    if (str.empty()|| width <= str.size()) { // Checking if the string is empty or if the width is less/equal of string size
        return str; // if empty it returns the string back
    }
    int extra = width - str.size(); // extra = the extra space that's not the actual string
    int left_extra = extra / 2; // side_extra = half of the extra space, so one side is the left and the other on the right
    int right_extra = extra - left_extra; // Right side gets the remaining 

    std::string result = str; // result = string we'll turn in
    result.insert(result.begin(), left_extra, fill); // inserting the beginning of the string with side_extra about of fill
    result.append(right_extra, fill); // appending amount of times on the end of the string(on the right)

    return result;
}

//Assignment: Returns the center/left/right justified strings
std::string LJust(const std::string &str, int width, char fill) noexcept{

    if (str.empty()) { // Checking if the string is empty
        return str; // if empty it returns the string back
    }
    int extra = width - str.size(); // extra = the extra space that's not the actual string
    int left_extra = extra / 2; // side_extra = half of the extra space, so one side is the left and the other on the right
    std::string result = str; // result = string we'll turn in
    result.insert(result.begin(), left_extra, fill); // inserting the beginning of the string with side_extra about of fill
  

    return result;
}

//Assignment: Returns the center/left/right justified strings
std::string RJust(const std::string &str, int width, char fill) noexcept{

    if (str.empty()) { // Checking if the string is empty
        return str; // if empty it returns the string back
    }

    return str;
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