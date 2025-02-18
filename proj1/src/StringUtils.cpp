// Rei Hernandez
// ECS 34 Winter 2025
//
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

//Assignment: Returns the left justified strings
std::string LJust(const std::string &str, int width, char fill) noexcept{

    if (str.empty()|| width <= str.size()) { // Checking if the string is empty if the width is less/equal of string size
        return str; // if empty it returns the string back
    }

    int extra = width - str.size(); // extra = the extra space that's not the actual string

    std::string result = str; // result = string we'll turn in
    result.append(extra, fill); // appending amount of times on the end of the string(on the right)
  

    return result;
}

//Assignment: Returns the right justified strings
std::string RJust(const std::string &str, int width, char fill) noexcept{

    if (str.empty()|| width <= str.size()) { // Checking if the string is empty if the width is less/equal of string size
        return str; // if empty it returns the string back
    }
    int extra = width - str.size(); // extra = the extra space that's not the actual string
    std::string result = str; // result = string we'll turn in
    result.insert(result.begin(), extra, fill); // inserting the beginning of the string with side_extra about of fill
  
    return result;
}
// Assignment =  Returns the string str with all instances of old replaced with rep
std::string Replace(const std::string &str, const std::string &old, const std::string &rep) noexcept{
    
    if (str.empty() || old.empty()) { // Checking if the string is empty, or if the old is empty
        return str; // if empty it returns the string back
    }
    std::string result = str; // result = string that will be modified and returned
    size_t index = 0; // index = position where the old will be searched from

    while ((index = result.find(old, index)) != std::string::npos) { // starting from the beginning of the string, it looks for old
    result.replace(index, old.length(), rep); // Replaces old with rep
    index += rep.length(); // moves past it now that we replaced it, and iterates again
    }

    return result;
}

// Assignment = Splits the string up into a vector of strings based on splt parameter, if
// splt parameter is empty string, then split on white space
std::vector< std::string > Split(const std::string &str, const std::string &splt) noexcept{

    if (str.empty()){ // if the string is empty then there's no vector to really work on...
        return {};
    }
    if (splt.empty()){

    }
    return {};

}

// Assignment = Joins a vector of strings into a single string
std::string Join(const std::string &str, const std::vector< std::string > &vect) noexcept{

    if (vect.empty()) { // If the vector of strings is empty, then there's nothin to put as a string
        return "";
    }
    std::string result; // this will hold all the strings in the vector in one string.

    for (size_t i = 0; i < vect.size(); ++i) { //Iterates through each string in the vector
        result += vect[i]; // adds the string into our result single string
        if (i < vect.size() - 1) { 
            result += str;
        }
    }
    return result; // returns our single string
}

// Assignment = Replaces tabs with spaces aligning at the tabstops
// str = string
// tabsize = the size of the tab??
std::string ExpandTabs(const std::string &str, int tabsize) noexcept{

    if (str.empty()) { // Checking if the string is empty
        return str; // if empty it returns the string back
    }
    std::string result = ""; // result = what will be modified and turned innnn
    int index = 0; // index = where in the string we'll be

    for (int i = 0; (i < str.size()); i++){ // Iterates through each character in the string
    
        if (str[i] == '\t') { // if the index we're on is a tab...
            int spaces = tabsize - (index % tabsize); // spaces = spaces we gotta add 
            result.append(spaces, ' '); // apends the spaces we need to add
            index += spaces; // Update column position
        } else {
            if (str[i] == '\n') { 
                index = 0; // Reset column if newline is found
                result += str[i]; // Append normal characters as they are
            } else { 
                index += 1; 
                result += str[i]; // Append normal characters as they are
            }
        }
    }
    return result;
}
// Assignment = Calculates the Levenshtein distance (edit distance) between the two strings
int EditDistance(const std::string &left, const std::string &right, bool ignorecase) noexcept{
    // Replace code here
    return 0;
}

};