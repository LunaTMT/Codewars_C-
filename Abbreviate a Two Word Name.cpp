#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string abbrevName(string name) {
    stringstream ss(name); 
    string first, last;
    ss >> first >> last; 
    
   
    string initials = string(1, toupper(first[0])) + '.' + string(1, toupper(last[0]));
    
    return initials;
}       

int main() {
    std::cout << "Hi";
}

