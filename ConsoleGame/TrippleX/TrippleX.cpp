#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    std::cout << R"(
                                       _     _ _           _       _     _   
       __ _ _   _  ___  ___ ___    ___| |__ (_) |_    _ __(_) __ _| |__ | |_ 
      / _` | | | |/ _ \/ __/ __|  / __| '_ \| | __|  | '__| |/ _` | '_ \| __|
     | (_| | |_| |  __/\__ \__ \  \__ \ | | | | |_   | |  | | (_| | | | | |_ 
      \__, |\__,_|\___||___/___/  |___/_| |_|_|\__|  |_|  |_|\__, |_| |_|\__|
      |___/                                                  |___/           
                                                                             
          ___  _ __    _   _  ___  _   _ _ __ ___     __ _  __ _ _   _       
         / _ \| '__|  | | | |/ _ \| | | | '__/ _ \   / _` |/ _` | | | |      
        | (_) | |     | |_| | (_) | |_| | | |  __/  | (_| | (_| | |_| |      
         \___/|_|      \__, |\___/ \__,_|_|  \___|   \__, |\__,_|\__, |      
                       |___/                         |___/       |___/   ha
                        welcome to the level )" << Difficulty << std::endl << std::endl;

}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    const int NumberA = rand() % Difficulty + Difficulty;   
    const int NumberB = rand() % Difficulty + Difficulty;
    const int NumberC = rand() % Difficulty + Difficulty;

    const int CodeSum = NumberA + NumberB + NumberC;
    const int CodeProduct = NumberA * NumberB * NumberC;

    std::cout << "\n                         Ok, so there is 3 numbers" << std::endl;
    std::cout << "                              - The codes add-up to " << CodeSum << std::endl;
    std::cout << "                              - The codes multyply to give " << CodeProduct << std::endl;
    std::cout << "Here                          Go for it, input numbers as 1 2 3" << std::endl;


    int GuessA, GuessB, GuessC;

    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    std::cout << "                              So you silly bun think it's " << GuessA << GuessB << GuessC << "?" << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "                              Cool, but were not done yet.";
        return true;
    }
    else
    {
        std::cout << R"(
                                               oh honey,


               ___           ___                    ___           ___                   
              /  /\         /  /\                  /  /\         /  /\          __      
             /  /:/        /  /::\                /  /::\       /  /::\        |  |\    
            /  /:/        /  /:/\:\              /  /:/\:\     /  /:/\:\       |  |:|   
           /  /:/        /  /::\ \:\            /  /:/  \:\   /  /::\ \:\      |  |:|   
          /__/:/     /\ /__/:/\:\_\:\          /__/:/_\_ \:\ /__/:/\:\_\:\     |__|:|__ 
          \  \:\    /:/ \__\/~|::\/:/          \  \:\__/\_\/ \__\/  \:\/:/     /  /::::\
           \  \:\  /:/     |  |:|::/            \  \:\ \:\        \__\::/     /  /:/~~~~
            \  \:\/:/      |  |:|\/              \  \:\/:/        /  /:/     /__/:/     
             \  \::/       |__|:|~                \  \::/        /__/:/      \__\/      
              \__\/         \__\|                  \__\/         \__\/                    holy bruh


                                                  thats not the game-over btw, try again dumass        )" << std::endl;

        return false;
    }

}

int main()
{
    srand(time(NULL));

    int LevelDifficulty = 1;
    const int MaxDiff = 5;

    while (LevelDifficulty <= MaxDiff)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }
    std::cout << "Youre not gay congats my guy";
    return 0;
}

