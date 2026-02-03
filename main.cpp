/*
This program was written to help users better understand how numbers can be broken down into factor pairs.
Someone who is learning math or computer science could use this program to see how multiplication and
division relate to each other. I wrote this program to practice using loops/iteration and conditionals to solve
common high school level math problems. The program allows the user to enter any positive
integer and get all the positive factor pairs. This makes the program both educational and interactive for the user.

The program works by first asking the user for a positive integer and using a while loop to ensure that the
input is valid (error handling). It then uses nested for loops and conditional statements to test which numbers divide
evenly into the input value. Variables are used to store the user input, factor values, and the total
number of factor pairs found. Arithmetic and relational operators such as modulus, multiplication, and
comparison operators are used to check divisibility and find factor pairs. Although there are more efficient ways to complete this
problem, the logic used here was effective for practicing nested loops. 
*/


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Welcome message
    cout << "Welcome to the factor pair calculator!" "\n";
    
    //Requesting user to input positive integer
    cout << "Enter in a positive integer: " ;
    
    //Storing user input into an int variable name inputNumber
    int inputNumber;
    cin >> inputNumber;
   
    /*If/While user inputs a negative number or zero, 
    User will be asked to re-enter number*/
    while(inputNumber <= 0) {
        cout << "You must enter a postiive, integer" << endl;
        cout << "Re-enter your number: ";
        cin >> inputNumber;
    }
    //Declaring two factor variables and factorPairCount variable
    int factor1;
    int factor2;
    int factorPairCount = 0;
    
    //Loop through all values 1 to the number inputed by the user inclusive
    for(int i = 1; i <= inputNumber; i++){
        
        //If the input number divided by the current i value has a remainder of 0, assign that i value as a factor1
        if(inputNumber % i == 0){
             factor1 = i;
                //Loop through all values from i to input number inclusive
                for(int j = i; j <= inputNumber; j++){
                    //If the input number divided by the current j value has a remainder of 0, assign that j value as a factor2
                    if(inputNumber % j == 0){
                         factor2 = j;
                        
                        //if factor1 * factor2 is equal to the input number, then it is a factor pair so update factorPairCount by 1
                        if(factor1 * factor2 == inputNumber){
                            factorPairCount++;
                            
                            //Output factor pairs
                            cout << "Factor Pair " << factorPairCount <<": " << factor1 << ", " << factor2 << endl;
                          
                        }
                    }
            }
        }
    }
    //Output factor pair summary
    cout << "The number " << inputNumber << " has a total of " << factorPairCount << " positive factor pairs!" << endl;
    
        //0 is returned as an int from main class to show program has run succesfully. 
        return 0;
}
