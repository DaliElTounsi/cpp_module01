#include <iostream>
#include <string>

#include "Harl.hpp"

int main()
{
    Harl harli;

    harli.complain("DEBUG");
    harli.complain("INFO");
    harli.complain("WARNING");
    harli.complain("ERROR");
    return 0;
}