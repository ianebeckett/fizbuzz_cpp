#include <string>
#include "functions.h"

using std::string;

string doFizzBuzz(int numDividing) {

    bool fizz = false;
    bool buzz = false;
    string FizzBuzzResult = "";

    if (numDividing % 3 == 0) { fizz = true; }
    if (numDividing % 5 == 0) { buzz = true; }

    if (buzz && fizz) { FizzBuzzResult.append("FizzBuzz"); }
    else if (fizz && !buzz) { FizzBuzzResult.append("Fizz"); }
    else if (buzz && !fizz) { FizzBuzzResult.append("Buzz"); }

    return FizzBuzzResult;
}
