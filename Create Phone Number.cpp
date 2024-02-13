#include <string>
#include <sstream>

using namespace std;

string createPhoneNumber(const int arr[10]) {
    ostringstream oss;
    for (int i = 0; i < 10; ++i) {
        oss << arr[i];
    }

    return "(" + oss.str().substr(0, 3) + ") " + oss.str().substr(3, 3) + "-" + oss.str().substr(6, 4);
}

int main(){
  return 0;
}