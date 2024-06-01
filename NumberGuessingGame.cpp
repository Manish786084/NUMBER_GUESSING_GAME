#include<iostream>
#include<cstdlib>
#include<ctime>
int main()
{
    do
    {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int randNum=std::rand()%100+1;
    int userGuess=0;
    std::cout<<"Number Guessing Game";
    std::cout<<"Guess the number between 1 to 100\n";
    while(userGuess!=randNum)
    {
        std::cin>>userGuess;
        if(userGuess>randNum)
        {
            std::cout<<"Too High! Try Again\n";
        }
        else if (userGuess<randNum)
        {
            std::cout<<"Too Low! Try Again\n";
        }
        else{
            std::cout<<"Congratulations! You Have Win\n";
        }
        break;
    }
    }while(1);
    return 0;
}