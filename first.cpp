#include <iostream>
#pragma optimize("", off)

/**
 * @brief Her is my first code in c++. I like it becuse of cherno.
 *
 * @return int
 */

int main()
{
    //  print welcome message to our game.
    std::cout << "this is my first project in c++ so i am very pasionated" << std::endl;
    std::cout << "So i Will understand it very will" << std::endl;

    // declare variables.
    const int a = 1;
    const int b = 2;
    const int c = 3;

    // calclulate sum and multiply result to terminal.
    const int sum = a + b + c;
    const int multi = a * b * c;

    // print the result of sum and multiply to terminal.
    std::cout << "we are caluculating 3 numbers " << a << " " << b << " " << c << std::endl;
    std::cout << sum << std::endl
              << multi << std::endl;

    return a;
}