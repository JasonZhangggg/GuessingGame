#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  int randomNum = 0;
  int input = 0;
  string playAgain;
  bool playAgainBool = true;
  int tries = 0;
  while (true){
    //generate the random number
    srand(time(NULL));
    randomNum = rand() % 100;
    //set tries to 0
    tries = 0;
    do{
      //increment tries by 1
      tries++;
      cout << "What is your guess?" << endl;
      //get the users guess
      cin >> input;
      //if the guess is less then the random number
      if(input<randomNum){
	//tell the user
	cout << "Your guess was too small." << endl;
      }
      //if the input is to large
      else if (input>randomNum){
	//tell the user
	cout <<"Your guess was too large." << endl;
      }
      //have a do while that only exits if the input = random number which means the user guessed the number right
    } while (input != randomNum);
    //print that they guessed the right number and how many tries it took
    cout << "Your guess was correct!" << endl;
    cout << "It took you " << tries << " tries" << endl;
    //have a do while loop u
    ntil they answer yes or no
    do{
      //ask them if they would like to play again
      cout << "Would you like to play again? (y/n)" << endl;
      cin >> playAgain;
      //if no then return
      if (playAgain == "n"){
	return 0;
      }
      //if they input yes they the while true continues
    } while (playAgain !="y" && playAgain != "n");
  }
    return 0;
}
    
    
