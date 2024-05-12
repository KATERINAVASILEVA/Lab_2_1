#include "func.hpp"
#include <fstream>
#include <iostream>

int main()
{
    int counter = mt::line_number("assets/time.txt");
    mt::out("assets/time.txt", counter);
}