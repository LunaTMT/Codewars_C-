#include <iostream>
#include <sstream>
#include <vector>
#include <cctype> 

std::string pig_it(std::string str) {
    std::stringstream ss(str);
    std::vector<std::string> words;
    std::string word;

    while (ss >> word) {
        if (std::isalpha(word[0])) {  // Check if the first character is an alphabet letter
            word = word.substr(1) + word[0] + "ay";
        }
        words.push_back(word);
    }

    // Join the words into a single string with a space delimiter
    std::string result = "";
    for (size_t i = 0; i < words.size(); ++i) {
        result += (i > 0 ? " " : "") + words[i];
    }

    return result;
}