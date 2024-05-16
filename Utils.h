#pragma once

#include <iostream>

namespace lib {
    // Gets an integer as input and validates the range as well. It prints a message if the range isn't valid and prompts again
    int getIntegerInput(int minRange, int maxRange, const char* message = "Invalid Selection, try again: ");
}
