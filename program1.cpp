
#include <iostream>
using namespace std;

class test {
public:
    test() {
        cout << "hello world!";
    }
};  // <-- important semicolon

int main() {
    test t;
    return 0;
}