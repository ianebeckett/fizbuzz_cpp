#include <iostream>
#include "functions.h"

using std::cout, std::endl;

int main() {

    int n = 100;
    for (int i = 0; i <= n; i++) {
        cout << i << ": " << doFizzBuzz(i) << endl;
    }
    return 0;
}
