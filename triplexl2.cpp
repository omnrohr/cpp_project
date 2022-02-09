#include <iostream>

void PrintIntroduction(int Difficulty)
{
    std::cout << "\n\nYou are a secret agent breaking into a level " << Difficulty << " secure server room...\n";
    std::cout << "Enter the correct code to continue...\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    const int CodeA = 1;
    const int CodeB = 2;
    const int CodeC = 3;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to the terminal
    std::cout << "+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl;

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the players guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int LevelDifficulty = 1;
    int const MAXDIFFICULTY = 5;
    while (LevelDifficulty <= MAXDIFFICULTY)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();  // Clears any errors
        std::cin.ignore(); // Discards the buffer
        if (bLevelComplete)
        {
            if (LevelDifficulty <= 4)
            {
                std::cout << "\n***Nice work agent, You extracted a file! Keep going..***\n";
            }
            ++LevelDifficulty;
        }
        else
        {
            std::cout << "\n***opps, you entered a wrong code!, careful agent! Try again***\n";
        }
    }
    std::cout << "\n\n*****************************************************************\n***Grate work agent, You got all files, Now get aout of there!***\n*****************************************************************\n\n";

    return 0;
}