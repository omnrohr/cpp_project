#include <iostream>

void PrintIntroduction()
{
    // Print welcome messages to the terminal
    std::cout << "You are a secret agent breaking into a secure server room...\n";
    std::cout << "Enter the correct code to continue... \n\n";
}

int PlayGame()
{

    const int CodeA = 1;
    const int CodeB = 2;
    const int CodeC = 3;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;
    // Print CodeSum and CodeProduct to the terminal
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code \n";
    std::cout << "+ The codes add-up to: " << CodeSum << "\n";
    std::cout << "+ The codes multiply to give: " << CodeProduct << "\n Please enter a guess:\n";

    // declare guesses for user Input and save them.
    int PlayerGuess;
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    std::cout << std::endl
              << "You enterd " << GuessA << " " << GuessB << " " << GuessC << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // check if youser win.
    if (GuessSum == CodeSum && CodeProduct == GuessProduct)
    {
        std::cout << "\nYou got the point! \n";
        return 1;
    }
    else
    {
        std::cout << "\nOps, you missed the round... you lost a point.. try agian. \n";
        return -1;
    }
}

int main()
{
    PrintIntroduction();

    const int MAXINPUT = 10;
    int Counter = 0;
    int Scoor = 2;

    while (Counter <= MAXINPUT)
    {
        if (Scoor <= 0)
        {
            std::cout << "\n\nYou loos the game, hard luck \n";
            break;
        }
        else if (Scoor == 5)
        {
            std::cout << "\n\nCongrats you WIN the game!";
            break;
        }
        else
        {
            Scoor += PlayGame();
            std::cin.clear();  // clear any erroes.
            std::cin.ignore(); // Discard the puffer.
            Counter++;
        }
    }
    return 0;
}