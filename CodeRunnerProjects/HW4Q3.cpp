/*
You are developing a crafting system for an RPG video game where players can create two types of potions: Health Potions and Magic Potions. Each type of potion requires four key ingredients: Tealeaves, Sunflowers, Toadstools, and Pine Needles. However, the quantity of each ingredient needed differs slightly between the two types of potions.

Your task is to write a program that asks the user which potion they would like to prioritize—Health or Magic. If the user enters an invalid number for the type of potion, the program should ask them to re-enter like this: Invalid input. Please select 1 or 2. The program will then prompt the user to input the number of each ingredient they currently have (Tealeaves, Sunflowers, Toadstools, and Pine Needles). Based on the available ingredients, calculate how many potions of the priority type can be crafted. Any leftover ingredients should be used to craft as many of the other types of potion as possible. Finally, the program should output how many of the priority potions can be crafted and how many of the other potions can be made with the remaining ingredients.

The ingredient requirements for each type of potion are as follows:

Ingredients	Amount for Health Potion	Amount for Magic Potion
Tealeaves	6	2
Sunflowers	1	3
Toadstools	5	10
Pine Needles2	1

Develop and validate your solution in VS Code. Once you are happy with your solution, go to coderunner on Canvas and paste the whole program into the answer box!


With magic potions for example, if user inputs 9 for tealeaves, they can create 4 magic from tealeaves, 3 from sunflowers, 0 from toadstools, and 9 from pine needles

*/

#include <iostream>
using namespace std;

int main()
{
    int healthPotion;
    int magicPotion;
    cout<<"Enter which type of potion you would like to prioritze"<<endl<<"1. Health Potion"<<endl<<"2. Magic Potion";



}



