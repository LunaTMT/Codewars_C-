#include <string>
#include <vector>

template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& it){
    std::vector<char> result;

    if (!str.empty()){
        char current = str[0];
        result.push_back(current);

        for (auto e : str){
            if (e != current){
                current = e;
                result.push_back(e);
            }
        }
    }
    return result;
}

std::vector<char> uniqueInOrder(const std::string& str){
    std::vector<char> result;

    if (!str.empty()){
        char current = str[0];
        result.push_back(current);

        for (char c : str){
            if (c != current){
                current = c;
                result.push_back(c);
            }
        }
    }
    return result;
}