#include <iostream>
using namespace std;

int main() {
    try {
        throw "An error occurred!";
    }
    catch (int e) {
        cout << "Caught integer exception: " << e << endl;
    }
    catch (const char* e) {
        cout << "Caught string exception: " << e << endl;
    }

    return 0;
}
