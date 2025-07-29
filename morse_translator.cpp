#include <iostream>
int main() {
    std::cout << "Morse Code Translator" << std::endl;
    return 0;
}
#include <iostream>
#include <map>
#include <cctype>

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
int main() {
    std::cout << "Morse Code Translator\n";
    std::string message;
    std::cout << "Enter a message (A-Z and 0-9 only): ";
    std::getline(std::cin, message);
    return 0;
}

    std::cout << "Morse Code Translator\n";
    return 0;
}

for (char c : message) {
    if (c == ' ') {
        std::cout << "\n";  // Newline for space between words
        continue;
    }
    c = toupper(c);
    if (morseCode.find(c) != morseCode.end()) {
        std::cout << c << ": " << morseCode[c] << "\n";
    }
}
