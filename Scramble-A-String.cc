#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
  string program = "program";
  string shuffledWord = program;
  int seed;
  cout << "Type a random number" << endl;
  cin >> seed;
  srand(seed);
  for(int i = 0; i < shuffledWord.length(); i++)
  {
      int num = rand() % program.length(); //”Randomly” shuffles “program”  (C++ Shell cannot handle random numbers) 
      char temp = shuffledWord[i];
      shuffledWord[i] = shuffledWord[num];
      shuffledWord[num] = temp;
      //cout << num << endl;
      //Test random number generator.  Uncomment to test generator
  }
  cout << shuffledWord + "\n";
  cout << "What is the shuffled word?\n";

  int i;
  bool won = false;
  for(i = 1; i <=4 && !won; i++) //Number of tries to get it right.
  {
    string guess;
    getline (cin, guess);
    if(guess == program)  //If the guess is right, it will terminate the loop prematurely
    {
     won = true;
    }
    else if (i >=2 && i < 4)
    {
        cout <<"Try Again" << endl;
    }
  }
  if(won)
  {
      cout <<"Congratulations!  You guessed the right word!";
  }
  else
  {
      cout <<"Game over.  Maybe Next time";
  }
}