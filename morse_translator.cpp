// Morse Code Translator
// Author: Phindile Ndlovu
// Converts uppercase letters and digits into Morse code

#include <iostream>
#include <map>
#include <cctype>

// Morse code dictionary
std::map<char, std::string> morseCode = {
    {'A', ".-"}, {'B', "-..."}, {'C', "-.-."},
    {'D', "-.."}, {'E', "."}, {'F', "..-."},
    {'G', "--."}, {'H', "...."}, {'I', ".."},
    {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."},
    {'M', "--"}, {'N', "-."}, {'O', "---"},
    {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."},
    {'S', "..."}, {'T', "-"}, {'U', "..-"},
    {'V', "...-"}, {'W', ".--"}, {'X', "-..-"},
    {'Y', "-.--"}, {'Z', "--.."},
    {'0', "-----"}, {'1', ".----"}, {'2', "..---"},
    {'3', "...--"}, {'4', "....-"}, {'5', "....."},
    {'6', "-...."}, {'7', "--..."}, {'8', "---.."},
    {'9', "----."}
};

int main() {
    std::cout << "Morse Code Translator\n";

    // Get user input
    std::string message;
    std::cout << "Enter a message (A-Z and 0-9 only): ";
    std::getline(std::cin, message);

    // Output Morse code line by line
    for (char c : message) {
        if (c == ' ') {
            std::cout << "\n";  // New line between words
            continue;
        }
        c = toupper(c);
        if (morseCode.find(c) != morseCode.end()) {
            std::cout << c << ": " << morseCode[c] << "\n";
        }
    }

    // Output full Morse code message
    std::cout << "\nFull Morse Code Message:\n";
    for (size_t i = 0; i < message.size(); i++) {
        char c = toupper(message[i]);
        if (c == ' ') {
            std::cout << "       ";  // 7 spaces between words
        } else if (morseCode.find(c) != morseCode.end()) {
            std::cout << morseCode[c];
            if (i != message.size() - 1) {
                std::cout << "   ";  // 3 spaces between letters
            }
        }
    }
    std::cout << std::endl;

    return 0;
}
