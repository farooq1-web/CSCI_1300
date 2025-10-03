#include <iostream>
#include <string>

using namespace std;

//C++ libraries that gives us functionality for randomness
#include <cstdlib> //This gives us rand() and RAND_MAX
#include <ctime> //This gives us Time 

void randomDice();
void numberGame();



int main()
{
    randomDice();
    numberGame();
}





void randomDice()
{
    /*seed the random number generator
    //the time(0) returns the number of seconds since the unix epoch so unless
    the program is run multiple times at the same time, there will be a different seed or staring point
    */
    srand(time(0));

    for(int i=0; i<=10; i++)
    {
        /*rand max is 2147483647 (maximum integer), 
        modding this rand max will provide us a range of numbers from 0 - x 
        This code will generate a integer between 0 and 5 and adding 1 will allow us to get a number between 1 and 6 as we shift the range up by 1
        */
        int d1 = rand() % 6 +1;
        int d2 = rand() % 6 +1;
        cout<<d1<<" "<<d2<<" ";
    }
    cout<<endl;
}

void numberGame()
{
    bool playAgain = true; //outer check to play the game

    int guess = 0;
    int numberOfGuesses = 0;
    srand(time(0));

    
    //outer while loop goes as long as the user wants to play the game
    while(playAgain)
    {
        //generate a random number 1-100
        //The +1 moves range from 0-99 to 1-100
        int number = rand() %100 + 1;
        
        //get users guess
        cout<<"Guess a number between 1-100 ";
        cin>>guess;
        while(guess != number)
        {
            numberOfGuesses++;
            if (number<guess)
            {
                cout<<"Your guess is too high"<<endl;
            }
            else
            {
                cout<<"Your guess is to low"<<endl;
            }
            cout<<"Guess again: "<<endl;
            cin>>guess;
        }
        cout<<"Great, you guessed the correct number. It took "<< numberOfGuesses<< " Number of tries. Play Again (1=Y, 0=N)";
        cin>>playAgain;
    }
    //while guess != number
    //provide feedback, if number too high, say too high, otherwise state too low
    //Ask the user to enter another guess
    //Ask user again if they want to play a game, loop again if yes

}