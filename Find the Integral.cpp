
#include <string>
std::string integrate(const int& a,const int& b){
  return std::to_string(a/(b+1)) + "x^" + std::to_string(b+1);
}

int main() {
    return 0;  // Indicates successful execution
}
