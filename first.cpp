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
    std::cout << std::endl
              << "this is my first project in c++ so i am very pasionated" << std::endl;
    std::cout << "So i Will understand it very will" << std::endl;

    // get user input.
    int GueseA, GueseB, GueseC;
    std::cin >> GueseA >> GueseB >> GueseC;
    std::cout << std::endl;

    // Print
    std::cout << "Your input is: " << GueseA << " " << GueseB << " " << GueseC << std::endl;

    // declare variables.
    const int CodeA = 1;
    const int CodeB = 2;
    const int CodeC = 3;

    // calclulate sum and multiply result to terminal.
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA + CodeB + CodeC;

    // print the result of sum and multiply to terminal.
    std::cout << std::endl
              << "we are caluculating 3 numbers " << CodeA << " " << CodeB << " " << CodeC << std::endl;
    std::cout << "sum: " << CodeSum << std::endl
              << "multiply: " << CodeProduct << std::endl;

    return 0;
}