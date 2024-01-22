#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>

class Opstrings {
public:
    static std::string vertMirror(const std::string &s) {
        std::vector<std::string> lines = splitString(s, '\n');

        for (std::string &line : lines) {
            std::reverse(line.begin(), line.end());
        }

        return joinString(lines, '\n');
    }

    static std::string horMirror(const std::string &s) {
        std::vector<std::string> lines = splitString(s, '\n');
        std::reverse(lines.begin(), lines.end());

        return joinString(lines, '\n');
    }

    static std::string oper(std::string (*fct)(const std::string &), const std::string &s) {
        return fct(s);
    }

private:
    static std::vector<std::string> splitString(const std::string &s, char delimiter) {
        std::vector<std::string> tokens;
        std::istringstream tokenStream(s);
        std::string token;

        while (std::getline(tokenStream, token, delimiter)) {
            tokens.push_back(token);
        }

        return tokens;
    }

    static std::string joinString(const std::vector<std::string> &lines, char delimiter) {
        std::string result;
        
        for (const std::string &line : lines) {
            result += line + delimiter;
        }

        // Remove the last delimiter
        if (!result.empty()) {
            result.pop_back();
        }

        return result;
    }
};

int main() {
    std::string s = "abcd\nefgh\nijkl\nmnop";

    // Example: Apply vertical mirror
    std::string result1 = Opstrings::oper(Opstrings::vertMirror, s);
    std::cout << "Vertical Mirror:\n" << result1 << "\n\n";

    // Example: Apply horizontal mirror
    std::string result2 = Opstrings::oper(Opstrings::horMirror, s);
    std::cout << "Horizontal Mirror:\n" << result2 << "\n";

    return 0;
}
