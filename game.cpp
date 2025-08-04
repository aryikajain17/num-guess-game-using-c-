#include <iostream>
using namespace std;
int main()
{
   int secretNumber = 7;
   int guess;
   int guessCount = 0;
   int guessLimit = 3;

   bool outofguesses = false;
   while(secretNumber != guess &&  !outofguesses) {
    if(guessCount < guessLimit) {
    cout << "Enter your guess: ";
    cin >> guess;
    guessCount++;
    } else {
       outofguesses = true;
       break;
    }
   }
   if(outofguesses) {
       cout << "You lose!" << endl;
       
   } else {
       cout << "You win!" << endl;
   }
   cout << "You guessed it!" << endl;
 
    return 0;
}